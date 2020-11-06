#include "pch.h"
#include "DBController.h"

//#define codigo_de_usuarios 10000000
//#define codigo_supervisor 0
//#define codigo_customer 1
//#define codigoSalesman 2

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

/**********************************************************************************************/
SalesController::WorkerDB::WorkerDB() {
}

void SalesController::DBController::SaveWorkers()
{
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(WorkerDB::typeid);

	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("users.xml");
	writer->Serialize(file, workerDB);
	file->Close();
}

void SalesController::DBController::LoadWorkers()
{
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(WorkerDB::typeid);
	System::IO::StreamReader^ file = nullptr;
	try {
		file = gcnew System::IO::StreamReader("users.xml");
		workerDB = (WorkerDB^)reader->Deserialize(file);
	}	catch (Exception^ ex) {
		return;
	} 	finally {
		if (file != nullptr) file->Close();
	}
}
/**********************************************************************************************/

/**********************************************************************************************/
Worker^ SalesController::DBController::ValidateWorker(int userID, String^ password) {
	Worker^ worker = nullptr;
	for (int i = 0; i < workerDB->ListDB->Count; i++) {
		if (workerDB->ListDB[i]->UserID == userID &&
			workerDB->ListDB[i]->Password->Equals(password))
			return workerDB->ListDB[i];
	}
	return worker;
}

int SalesController::DBController::QueryLastWorkerId()
{
	return workerDB->ListDB[workerDB->ListDB->Count-1]->UserID;
}

/**********************************************************************************************/
void SalesController::DBController::SaveSupervisors()
{
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(SupervisorDB::typeid);

	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("supervisors.xml");
	writer->Serialize(file, supervisorDB);
	file->Close();
}

void SalesController::DBController::LoadSupervisor()
{
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(SupervisorDB::typeid);
	System::IO::StreamReader^ file = nullptr;
	try {
		file = gcnew System::IO::StreamReader("supervisors.xml");
		supervisorDB = (SupervisorDB^)reader->Deserialize(file);
	}
	catch (Exception^ ex) {
		return;
	}
	finally {
		if (file != nullptr) file->Close();
	}
}

void SalesController::DBController::AddSupervisor(Supervisor^ supervisor)
{
	supervisorDB->ListDB->Add(supervisor);
	SaveSupervisors();
}

void SalesController::DBController::UpdateSupervisor(Supervisor^ supervisor)
{
	for (int i = 0; i < supervisorDB->ListDB->Count; i++) {
		if (supervisorDB->ListDB[i]->UserID == supervisor->UserID)
			supervisorDB->ListDB[i] = supervisor;
	}
	SaveSupervisors();
}

void SalesController::DBController::DeleteSupervisor(int supervisorId) {
	for (int i = 0; i < supervisorDB->ListDB->Count; i++) {
		if (supervisorDB->ListDB[i]->UserID == supervisorId)
			supervisorDB->ListDB->RemoveAt(i);
	}
	SaveSupervisors();
}

List<Supervisor^>^ SalesController::DBController::QueryAllSupervisors()
{
	LoadSupervisor();
	return supervisorDB->ListDB;
}

Supervisor^ SalesController::DBController::QuerySupervisorByUserId(int supervisorId)
{
	LoadSupervisor();
	for (int i = 0; i < supervisorDB->ListDB->Count; i++) {
		if (supervisorDB->ListDB[i]->UserID == supervisorId)
			return supervisorDB->ListDB[i];
	}
	return nullptr;
}
/**********************************************************************************************/

SalesController::ProductDB::ProductDB() {

}

void SalesController::ProductDB::Persist()
{
	Stream^ stream = File::Open("products.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::ProductDB::LoadFromBinaryFile() {
	if (File::Exists("products.bin")) {
		Stream^ stream = File::Open("products.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Product^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}

void SalesController::DBController::AddProduct(Product^ p)
{
	productDB->ListDB->Add(p);
	productDB->Persist();
}

void SalesController::DBController::UpdateProduct(Product^ p)
{
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->ProductID == p->ProductID)
			productDB->ListDB[i] = p;
	}
	productDB->Persist();
}

void SalesController::DBController::DeleteProduct(int productId)
{
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->ProductID == productId)
			productDB->ListDB->RemoveAt(i);
	}
	productDB->Persist();
}

List<Product^>^ SalesController::DBController::QueryAllProducts()
{
	productDB->LoadFromBinaryFile();
	return productDB->ListDB;
}

//List<Product^>^ SalesController::DBController::QueryAllEspecificProduct(int productId)    /*EN REVISIÓN*/
//{
//	/*productDB->LoadFromBinaryFile();
//	for (int i = 0; i < productDB->ListDB->Count; i++) {
//		if 
//
//		if (productDB->ListDB[i]->ProductID == productId)
//			return productDB->ListDB[i];
//	}
//	return nullptr;*/
//}


int SalesController::DBController::QueryLastProductId()
{
	if (productDB->ListDB->Count > 0)
		return productDB->ListDB[productDB->ListDB->Count - 1]->ProductID;
	else
		return 0;
}

Product^ SalesController::DBController::QueryProductById(int productId)
{
	productDB->LoadFromBinaryFile();
	for (int i = 0; i < productDB->ListDB->Count; i++) {
		if (productDB->ListDB[i]->ProductID == productId)
			return productDB->ListDB[i];
	}
	return nullptr;
}
/**********************************************************************************************/

void SalesController::DBController::Init()
{
}


void SalesController::DBController::AddClaims(Claims^ c)
{


}

void SalesController::DBController::UpdateClaims(Claims^ c)
{

}

void SalesController::DBController::DeleteClaims(int claimId)
{

}

List<Claims^>^ SalesController::DBController::QueryAllClaims()
{
	List<Claims^>^ claimsList = gcnew List<Claims^>();
	return claimsList;
}

//List<Person^>^ SalesController::DBController::QueryAllPersons()
//{
//	List<Person^>^ customerList = gcnew List<Person^>();
//	return customerList;
//}

//List<Company^>^ SalesController::DBController::QueryAllCompanies()
//{
//	List<Company^>^ customerList = gcnew List<Company^>();
//	return customerList;
//}

Claims^ SalesController::DBController::QueryClaimsById(int claimId)
{
	Claims^ c;
	return c;

}

void SalesController::DBController::AddSalesman(Salesman^)
{
	
}

void SalesController::DBController::UpdateSalesman(Salesman^)
{
	throw gcnew System::NotImplementedException();
}

void SalesController::DBController::DeleteSalesman(int salesmanId)
{
	throw gcnew System::NotImplementedException();
}

List<Salesman^>^ SalesController::DBController::QueryAllSalesmen()
{
	List<Salesman^>^ list = gcnew List<Salesman^>();
	return list;
}

//Book^ SalesController::DBController::QueryBookById(int productId)
//{
//	Book^ s = nullptr;
//	for (int i = 0; i < productDB->ListDB->Count; i++) {
//		if (productDB->ListDB[i]->ProductID == productId && productDB->ListDB[i]->GetType() == Book::typeid) {
//			s = (dynamic_cast<Book^>(productDB->ListDB[i]));
//			return s;
//		}
//	}
//	return s;
//
//}

//Electronic^ SalesController::DBController::QueryElectronicById(int id)
//{
//	Electronic^ s = nullptr;
//	for (int i = 0; i < productDB->ListDB->Count; i++) {
//		if (productDB->ListDB[i]->Id == id && productDB->ListDB[i]->GetType() == Electronic::typeid) {
//			s = (dynamic_cast<Electronic^>(productDB->ListDB[i]));
//			return s;
//		}
//	}
//	return s;
//}

void SalesController::DBController::AddStoreProduct(StoreProduct^ sp) {

}

//List<Book^>^ SalesController::DBController::QueryAllBooks()
//{
//	productDB->LoadFromBinaryFile();
//	List<Book^>^ list = gcnew List<Book^>();
//	for (int i = 0; i < productDB->ListDB->Count; i++) {
//		if (productDB->ListDB[i]->GetType() == Book::typeid && productDB->ListDB[i]->Status=='A') {
//			list->Add(dynamic_cast<Book^>(productDB->ListDB[i]));
//		}			
//	}
//	return list;
//}

//List<Electronic^>^ SalesController::DBController::QueryAllElectronics()
//{
//	productDB->LoadFromBinaryFile();
//	List<Electronic^>^ list = gcnew List<Electronic^>();
//	for (int i = 0; i < productDB->ListDB->Count; i++) {
//		if (productDB->ListDB[i]->GetType() == Electronic::typeid && productDB->ListDB[i]->Status == 'A') {
//			list->Add(dynamic_cast<Electronic^>(productDB->ListDB[i]));
//		}
//	}
//	return list;
//}

//List<StoreProduct^>^ SalesController::DBController::QueryAllBooksFromStore(int storeId)
//{
//	List<StoreProduct^>^ list = gcnew List<StoreProduct^>();
//	return list;
//}

//List<StoreProduct^>^ SalesController::DBController::QueryAllElectronicsFromStore(int storeId)
//{
//	List<StoreProduct^>^ list = gcnew List<StoreProduct^>();
//	return list;
//}

//StoreProduct^ SalesController::DBController::QueryProductByIdFromStore(int productId)
//{
//	return nullptr;
//}

/*
void SalesController::DBController::SaveStoreProducts(Store^ store)
{
	if (store != nullptr && store->StoreProductList != nullptr && store->StoreProductList->Count > 0) {
		Stream^ stream = File::Open("storeProducts.bin", FileMode::Create);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		bFormatter->Serialize(stream, store->StoreProductList);
		stream->Close();
	}
}
*/
/*
void SalesController::DBController::LoadStoreProducts(Store^ store) {

	if (File::Exists("storeProducts.bin")) {
		Stream^ stream = File::Open("storeProducts.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		store->StoreProductList = (List <StoreProduct^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}

}
*/
void SalesController::DBController::SaveStores()
{
	/* Save stores in an XML file. */
	/*
	System::Xml::Serialization::XmlSerializer^ writer =
		gcnew System::Xml::Serialization::XmlSerializer(StoreDB::typeid);

	System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("stores.xml");
	StoreDB^ storeDBWithoutStoreProducts = gcnew StoreDB();
	storeDBWithoutStoreProducts->ListDB = storeDB->ListDB;
	for (int i = 0; i < storeDBWithoutStoreProducts->ListDB->Count; i++) {
		storeDBWithoutStoreProducts->ListDB[i]->StoreProductList = nullptr;
	}
	writer->Serialize(file, storeDBWithoutStoreProducts);
	file->Close();
	*/
	/* Save stores with store products in a binary file. */
	if (storeDB != nullptr) {// && storeDB->StoreProductList != nullptr && store->StoreProductList->Count > 0) {
		Stream^ stream = File::Open("stores.bin", FileMode::Create);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		bFormatter->Serialize(stream, storeDB->ListDB);
		stream->Close();
	}
}

void SalesController::DBController::LoadStores()
{
	/* Load stores from an XML file. */
	/*
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(StoreDB::typeid);
	System::IO::StreamReader^ file = nullptr;
	try {
		file = gcnew System::IO::StreamReader("stores.xml");
		storeDB = (StoreDB^)reader->Deserialize(file);
	}
	catch (Exception^ ex) {
		return;
	}
	finally {
		if (file != nullptr) file->Close();
	}
	*/
	if (File::Exists("stores.bin")) {
		Stream^ stream = File::Open("stores.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		storeDB->ListDB = (List <Store^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}

List<Store^>^ SalesController::DBController::QueryAllStores()
{
	LoadStores();
	return storeDB->ListDB;
}

void SalesController::DBController::AddStore(Store^ store)
{
	storeDB->ListDB->Add(store);
	SaveStores();
}

//void SalesController::DBController::UpdateStore(Store^ store)
//{
//	for (int i = 0; i < storeDB->ListDB->Count; i++) {
//		if (storeDB->ListDB[i]->Id == store->Id)
//			storeDB->ListDB[i] = store;
//	}
//
//	//if (store->StoreProductList == nullptr  )
//		SaveStores();
//	//else
//	//	SaveStoreProducts(store);
//}

//void SalesController::DBController::DeleteStore(int storeId)
//{
//	for (int i = 0; i < storeDB->ListDB->Count; i++) {
//		if (storeDB->ListDB[i]->Id == storeId)
//			storeDB->ListDB->RemoveAt(i);
//	}
//	SaveStores();
//}

//int SalesController::DBController::QueryLastStoreId()
//{
//	LoadStores();
//	if (storeDB->ListDB->Count <= 0)
//		return 0;
//	else
//		return storeDB->ListDB[storeDB->ListDB->Count-1]->Id;
//}


//Store^ SalesController::DBController::QueryStoreById(int storeId)
//{
//	LoadStores();
//	Store^ s = nullptr;
//	for (int i = 0; i < storeDB->ListDB->Count; i++) {
//		if (storeDB->ListDB[i]->Id == storeId) {
//			s = storeDB->ListDB[i];
//			return s;
//		}
//	}
//	return s;
//}


List<Book^>^ SalesController::DBController::QueryAllBooksByCoincidence(String^ str)
{
	List<Book^>^ list = gcnew List<Book^>();
	return list;
}

//List<Electronic^>^ SalesController::DBController::QueryAllElectronicsByCoincidence(String^ str)
//{
//	List<Electronic^>^ list = gcnew List<Electronic^>();
//	return list;
//}

/*****************************************************************************************************/
SalesController::SaleDB::SaleDB() {

}

void SalesController::DBController::RegisterSale(Sale^ sale)
{
	saleDB->ListDB->Add(sale);
	saleDB->Persist();
}

void SalesController::SaleDB::Persist()
{
	Stream^ stream = File::Open("sale.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void SalesController::SaleDB::LoadFromBinaryFile() {
	if (File::Exists("sale.bin")) {
		Stream^ stream = File::Open("sale.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		ListDB = (List <Sale^>^) bFormatter->Deserialize(stream);
		stream->Close();
	}
}
