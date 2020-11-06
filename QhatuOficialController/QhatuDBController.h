#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;
using namespace SalesModel;

namespace SalesController {
	[Serializable]
	public ref class WorkerDB {
	public:
		List <Worker^>^ ListDB = gcnew List<Worker^>();
		WorkerDB();
	};

	[Serializable]
	public ref class SupervisorDB {
	public:
		List <Supervisor^>^ ListDB = gcnew List<Supervisor^>();
	};

	public ref class ProductDB {
	public:
		List <Product^>^ ListDB = gcnew List<Product^>();
		ProductDB();
		void Persist();
		void LoadFromBinaryFile();
	};

	public ref class StoreDB {
	public:
		List <Store^>^ ListDB = gcnew List<Store^>();
	};

	public ref class StoreProductDB
	{
	public:
		List <StoreProduct^>^ ListDB = gcnew List<StoreProduct^>();
	};

	public ref class SalesmanDB
	{
		public:
			List <Salesman^>^ ListDB = gcnew List<Salesman^>();
	};

	public ref class ClaimsDB {
		public:
			List<Claims^>^ ListDB = gcnew List<Claims^>();
			//List<Company^>^ CompanyListDB = gcnew List<Company^>();
	};

	public ref class SaleDB {
		public:
			List<Sale^>^ ListDB = gcnew List<Sale^>();
			SaleDB();
			void Persist();
			void LoadFromBinaryFile();
	};

	public ref class DBController {
		private:
			static WorkerDB^ workerDB = gcnew WorkerDB();
			static SupervisorDB^ supervisorDB = gcnew SupervisorDB();
			static ProductDB^ productDB = gcnew ProductDB();
			static StoreDB^ storeDB = gcnew StoreDB();
			static StoreProductDB^ storeProductDB = gcnew StoreProductDB();
			static SalesmanDB^ salesmanDB = gcnew SalesmanDB();
			static ClaimsDB^ claimsDB = gcnew ClaimsDB();
			static SaleDB^ saleDB = gcnew SaleDB();

		public:
			static void Init();
			static void SaveWorkers();
			static void LoadWorkers();
			static Worker^ ValidateWorker(int userID, String^ password);
			static int QueryLastWorkerId();
			static void AddSupervisor(Supervisor^);
			static void UpdateSupervisor(Supervisor^);
			static void DeleteSupervisor(int supervisorId);
			static Supervisor^ QuerySupervisorByUserId(int supervisorId);
			static List<Supervisor^>^ QueryAllSupervisors();
			static void SaveSupervisors();
			static void LoadSupervisor();
			
			/*Claims and Saleman*/
			static void AddClaims(Claims^);
			static void UpdateClaims(Claims^);
			static void DeleteClaims(int claimId);
			static List<Claims^>^ QueryAllClaims();
			//static List<Person^>^ QueryAllPersons();
			//static List<Company^>^ QueryAllCompanies();
			static Claims^ QueryClaimsById(int claimId);
			static void AddSalesman(Salesman^);
			static void UpdateSalesman(Salesman^);
			static void DeleteSalesman(int salesmanId);
			static List<Salesman^>^ QueryAllSalesmen();

			/* Product */
			static Product^ QueryProductById(int);
			static List<Product^>^ QueryAllProducts();
			/*static List<Product^>^ QueryAllEspecificProduct(int);*/				/*EN REVISIÓN*/	
			static int QueryLastProductId();
			//static Book^ QueryBookById(int);
			//static Electronic^ QueryElectronicById(int);
			static void AddProduct(Product^);
			static void UpdateProduct(Product^);
			static void DeleteProduct(int productId);
			static void AddStoreProduct(StoreProduct^);
			//static List<Book^>^ QueryAllBooks();
			//static List<Electronic^>^ QueryAllElectronics();
			//static List<StoreProduct^>^ QueryAllBooksFromStore(int storeId);
			//static List<StoreProduct^>^ QueryAllElectronicsFromStore(int storeId);
			/*static StoreProduct^ QueryProductByIdFromStore(int productId);*/        /*EN REVISIÓN*/
			//static void SaveStoreProducts(Store^);
			//static void LoadStoreProducts(Store^);

			/* Store */
			static void SaveStores();
			static void LoadStores();
			static List<Store^>^ QueryAllStores();
			static void AddStore(Store^);
			/*static void UpdateStore(Store^);*/
			/*static void DeleteStore(int storeId);*/
			/*static Store^ QueryStoreById(int storeId);*/
			//static int QueryLastStoreId();

			static List<Book^>^ QueryAllBooksByCoincidence(String^);
			/*static List<Electronic^>^ QueryAllElectronicsByCoincidence(String^);*/

			static void RegisterSale(Sale^);
	};
}
