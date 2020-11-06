#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace SalesModel;

namespace SalesController {

	public ref class SalesManager {
		public:
			/*********************** Validar usuario *************************/
			static Worker^ ValidateWorker(int userID , String^ password);
			/**************************************************************/

			/*********************** Worker *******************************/
			static int QueryLastWorkerId();
			/**************************************************************/

			/********************** Supervisor ****************************/
			static void AddSupervisor(Supervisor^);
			static void UpdateSupervisor(Supervisor^);
			static void DeleteSupervisor(int);
			static Supervisor^ QuerySupervisorByUserId(int);
			static List<Supervisor^>^ QueryAllSupervisors();
			/**************************************************************/

			/********************** Product *******************************/
			static void AddProduct(Product^ );
			static void UpdateProduct(Product^ );
			static void DeleteProduct(int );
			static Product^ QueryProductById(int);
			//static Book^ QueryBookById(int);
			//static Electronic^ QueryElectronicById(int);
			/*static StoreProduct^ QueryProductByIdFromStore(int productId);*/		/*EN REVISIÓN*/
			static List<Product^>^ QueryProductsByName(String^ name);
			static List<Product^>^ QueryProductsByDescription(String ^ description);
			//****//
			static List<Product^> ^QueryAllProducts();
			/*static List<Product^>^ QueryAllEspecificProduct(int);*/				/*EN REVISIÓN*/
			//static List<Book^>^ QueryAllBooks();
			//static List<Electronic^>^ QueryAllElectronics();
			static int QueryLastProductId();
			/**************************************************************/

			/********************** Salesman ******************************/
			static void AddSalesman(Salesman^);
			static void UpdateSalesman(Salesman^);
			static void DeleteSalesman(int SalesmanId);
			/*static Salesman^ QuerySalesmanById(int salesmanId);*/					/*EN REVISIÓN*/
			static List<Salesman^>^ QueryAllSalesmen();
			/**************************************************************/

			/************************ Claims ******************************/
			static void AddClaims(Claims^);
			static void UpdateClaims(Claims^);
			static void DeleteClaims(int claimId);
			static List<Claims^>^ QueryAllClaims();
			//static List<Person^>^ QueryAllPersons();
			//static List<Company^>^ QueryAllCompanies();
			static Claims^ QueryClaimsById(int claimId);
			/**************************************************************/

			/************************ Stores ******************************/
			static List<Store^>^ QueryAllStores();
			static void AddStore(Store^);
			//static void UpdateStore(Store^);
			//static void DeleteStore(int storeId);
			//static Store^ QueryStoreById(int storeId);
			//static int QueryLastStoreId();
			/**************************************************************/

			/************************** Sale ******************************/
			static void RegisterSale(Sale^);

			/**************************************************************/
	};

	
}
