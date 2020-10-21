#pragma once
using namespace System;
using namespace System::Collections::Generic;

/*
    Se define el namespace SalesModel para tener un bloque de definiciones de clases
    que corresponden al modelo de la solución. Se entiende como Modelo (Model) a la capa
    que contiene las clases que son necesarias para modelar las entidades que participan
    en la solución. Esta estrategia sigue el patrón de arquitectura MVC (Model View Controller).
*/
namespace QhatuOficialModel {
    /*
        La clase User modela a un usuario del sistema
    */
    [Serializable]
    public ref class User {
    public:
        property String^ Name;
        property String^ LastName;
        /*User();
        User(int id, String^ username, String^ password, String^ firstName, String^ lastName, char gender);*/
    };

    /*
        La clase Customer modela a un cliente a quien se realiza la venta.
        Customer hereda de User, eso significa que todo cliente es un tipo de usuario del sistema.
    */
    [Serializable]
    public ref class Customer : public User {
    public:
        property int Age;
        property int Purchases;
        property int Points;
        property int DNI;
        property char Gender;

        Customer() {};
        Customer(String^ name, String^ lastName, int age, char gender);
        String^ ToString() override { return DNI + " " + Name + " " + LastName; }
    };

    [Serializable]
    public ref class Claims {
    public:
        property String^ Name;
        property String^ LastName;
        property int Age;
        property int DNI;
        property int ClaimId;
        property int ProductID;
        property Customer^ Customer;

    };

    [Serializable]
    public ref class Return {
    public:
        property int Id;
        property int ProductID;
    };

    /*
        La clase Person modela a una persona natural que es un tipo de cliente.
        Person hereda de Customer, eso significa que una persona natural es un tipo de cliente.
    */
    [Serializable]
    /*Modela a un producto de manera general*/
    public ref class Product {
    public:
        property String^ Type;
        property String^ Name;
        property String^ Description;
        //property DateTime^ ExpDate;
        //property DateTime^ FabDate;
        property int StockTotal;
        property String^ ExpDate;
        property String^ FabDate;
        property int ProductID;
        property double Price;
        property char Status;
        property array<Byte>^ Photo;

        Product();
        Product(int productid, String^ name, String^ description, int stockTotal, double price, char status);
    };

    [Serializable]
    public ref class Book : public Product {
    public:
        property String^ Author;
        property String^ Title;
        property String^ Edition;
        property String^ Editorial;
        property int Year;
        Book();
        Book(int productid, String^ name, String^ description, String^ author, String^ title, double price,
            int stockTotal, String^ edition, String^ editorial, int year, char status);
    };

    /*Define un producto por sucursal*/
    [Serializable]
    public ref class StoreProduct {
    public:
        property int Stock;
        property int MinStock;
        property double Discount;
        property Product^ Product;
        //Store 1;
    };

    /*Clase que define a una tienda*/
    [Serializable]
    public ref class Store {
    public:
        property String^ BusinessArea;
        property String^ Name;
        property String^ Adress;
        property double Opening;
        property double Closing;
        property List<StoreProduct^>^ Catalogo;
    };

    /*Clase que modela a un trabajador de la tienda*/
    [Serializable]
    public ref class Worker : public User {
    public:
        property double Salary;
        property int UserID;
        property String^ Password;
        property Store^ Store;
        Worker();
        Worker(String^ name, String^ lastName, double salary, String^ password, int userID);
    };

    /*Clase que define al vendedor de la tienda*/
    /*Hereda los atributos de la clase Worker y es un tipo de usuario*/
    [Serializable]
    public ref class Salesman : public Worker {
    public:
        property int Salary;
        property int Sales;
        property int Attendance;
        property String^ Password;
        property String^ Area;
    };

    /*Clase que define al supervisor de la tienda*/
    /*Hereda los atributos de la clase Worker y es un tipo de usuario*/
    [Serializable]
    public ref class Supervisor : public Worker {
    public:
        property int Salary;
        //void Attribute1;
        property String^ Password;
        property String^ Area;
        property List<Return^>^ Returns;
    };

    /*Clase que define al encargado de la tienda*/
    /*Hereda los atributos de la clase Worker y es un tipo de usuario*/
    [Serializable]
    public ref class Manager : public Worker {
    public:
        //tienda Tienda;
        property int NumberOfEmployees;
    };

    /*Define los detalles de la venta*/
    [Serializable]
    public ref class SaleDetail {
    public:
        property int Quantity;
        property double SubTotal;
        property StoreProduct^ Product;
    };

    /*Modela un comprobante de venta*/
    [Serializable]
    public ref class Sale {
    public:
        property double Total;
        property int Id;
        property char Status;
        //property DateTime Date;
        property String^ Date;
        property Salesman^ Salesman;
        property Customer^ Customer;
        property List<SaleDetail^>^ Details;
    };


}