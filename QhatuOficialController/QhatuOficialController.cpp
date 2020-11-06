#include "pch.h"
#include "SalesController.h"
#include "DBController.h"


using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace SalesModel;
using namespace System::Data::SqlClient;

/**********************************************************************************************/
Worker^ SalesController::SalesManager::ValidateWorker(int userID, String^ password)
{
	return DBController::ValidateWorker(userID, password);
}
/**********************************************************************************************/
int SalesController::SalesManager::QueryLastWorkerId()
{
	return DBController::QueryLastWorkerId();
}
/**********************************************************************************************/
void SalesController::SalesManager::AddSupervisor(Supervisor^ supervisor) {
	DBController::AddSupervisor(supervisor);
}

void SalesController::SalesManager::UpdateSupervisor(Supervisor^ supervisor) {
	DBController::UpdateSupervisor(supervisor);
}

void SalesController::SalesManager::DeleteSupervisor(int supervisorId) {
	DBController::DeleteSupervisor(supervisorId);
}

List<Supervisor^>^ SalesController::SalesManager::QueryAllSupervisors()
{
	return DBController::QueryAllSupervisors();
}

Supervisor^ SalesController::SalesManager::QuerySupervisorByUserId(int supervisorId) {
	return DBController::QuerySupervisorByUserId(supervisorId);
}
/**********************************************************************************************/
void SalesController::SalesManager::AddProduct(Product^ product)
{
	DBController::AddProduct(product);
}

void SalesController::SalesManager::UpdateProduct(Product^ product)
{
	DBController::UpdateProduct(product);
}

void SalesController::SalesManager::DeleteProduct(int productId)
{
	DBController::DeleteProduct(productId);
}

Product^ SalesController::SalesManager::QueryProductById(int productId)
{
	return DBController::QueryProductById(productId);
}

//Book^ SalesController::SalesManager::QueryBookById(int productId)
//{
//	return DBController::QueryBookById(productId);
//}

//Electronic^ SalesController::SalesManager::QueryElectronicById(int productId)
//{
//	return DBController::QueryElectronicById(productId);
//}

//StoreProduct^ SalesController::SalesManager::QueryProductByIdFromStore(int productId)
//{
//	return DBController::QueryProductByIdFromStore(productId);
//}

List<Product^>^ SalesController::SalesManager::QueryProductsByName(String^ name)
{
	List<Book^> ^bookList =  DBController::QueryAllBooksByCoincidence(name);
	/*List<Electronic^>^ electronicList = DBController::QueryAllElectronicsByCoincidence(name);*/
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < bookList->Count; i++)
		productList->Add(bookList[i]);
	/*for (int i = 0; i < electronicList->Count; i++)
		productList->Add(electronicList[i]);*/

	return productList;
}

List<Product^>^ SalesController::SalesManager::QueryProductsByDescription(String^ description)
{
	//List<Book^>^ bookList = DBController::QueryAllBooksByCoincidence(description);
	//List<Electronic^>^ electronicList = DBController::QueryAllElectronicsByCoincidence(description);
	List<Product^>^ productList = gcnew List<Product^>();

	/*for (int i = 0; i < bookList->Count; i++)
		productList->Add(bookList[i]);*/
	/*for (int i = 0; i < electronicList->Count; i++)
		productList->Add(electronicList[i]);*/

	return productList;
}

List<Product^>^ SalesController::SalesManager::QueryAllProducts()
{
	return DBController::QueryAllProducts();
}

//List<Product^>^ SalesController::SalesManager::QueryAllEspecificProduct(int productId)			/*EN REVISIÓN*/
//{
//	return DBController::QueryAllEspecificProduct(int productId);
//}

//List<Book^>^ SalesController::SalesManager::QueryAllBooks()
//{
//	return DBController::QueryAllBooks();
//}

int SalesController::SalesManager::QueryLastProductId()
{
	return DBController::QueryLastProductId();
}
/**********************************************************************************************/
void SalesController::SalesManager::AddSalesman(Salesman^ salesman)
{
	DBController::AddSalesman(salesman);
}

void SalesController::SalesManager::UpdateSalesman(Salesman^ SalesmanId)
{
	DBController::UpdateSalesman(SalesmanId);
}

void SalesController::SalesManager::DeleteSalesman(int SalesmanId)
{
	DBController::DeleteSalesman(SalesmanId);
}

List<Salesman^>^ SalesController::SalesManager::QueryAllSalesmen()
{
	return DBController::QueryAllSalesmen();
}
void SalesController::SalesManager::AddClaims(Claims^ claims)
{
	DBController::AddClaims(claims);
}

void SalesController::SalesManager::UpdateClaims(Claims^ claims)
{
	DBController::UpdateClaims(claims);
}

void SalesController::SalesManager::DeleteClaims(int claimId)
{
	DBController::DeleteClaims(claimId);
}

List<Claims^>^ SalesController::SalesManager::QueryAllClaims() {
	return DBController::QueryAllClaims();
}

//List<Person^>^ SalesController::SalesManager::QueryAllPersons()
//{
//	return DBController::QueryAllPersons();
//}

//List<Company^>^ SalesController::SalesManager::QueryAllCompanies()
//{
//	return DBController::QueryAllCompanies();
//}

Claims^ SalesController::SalesManager::QueryClaimsById(int claimId) {
	return DBController::QueryClaimsById(claimId);
}

List<Store^>^ SalesController::SalesManager::QueryAllStores()
{
	return DBController::QueryAllStores();
}

void SalesController::SalesManager::AddStore(Store^ store)
{
	DBController::AddStore(store);
}

//void SalesController::SalesManager::UpdateStore(Store^ store)
//{
//	DBController::UpdateStore(store);
//}

//void SalesController::SalesManager::DeleteStore(int storeId)
//{
//	DBController::DeleteStore(storeId);
//}

//int SalesController::SalesManager::QueryLastStoreId()
//{
//	return DBController::QueryLastStoreId();
//}

//Store^ SalesController::SalesManager::QueryStoreById(int storeId) {
//	return DBController::QueryStoreById(storeId);
//}


void SalesController::SalesManager::RegisterSale(Sale^ sale)
{
	DBController::RegisterSale(sale);
}


SalesController::SaleDB::SaleDB()
{
	
}
