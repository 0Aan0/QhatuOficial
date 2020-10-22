#include "pch.h"
#include "QhatuOficialModel.h"

QhatuOficialModel::Customer::Customer(String^ name, String^ lastName, int age, char gender) {
	this->Name = name;
	this->LastName = lastName;
	this->Age = age;
	this->Gender = gender;
}

QhatuOficialModel::Worker::Worker()
{
}

QhatuOficialModel::Worker::Worker(String^ name, String^ lastName, double salary, String^ password, int userID)
{
	Name = name;
	LastName = lastName;
	Salary = salary;
	Password = password;
	UserID = userID;
}
QhatuOficialModel::Book::Book()
{

}

QhatuOficialModel::Book::Book(int productid, String^ name, String^ description, String^ author, String^ title, double price,
	int stockTotal, String^ edition, String^ editorial, int year, char status) :
	QhatuOficialModel::Product::Product(productid, name, description, stockTotal, price, status) {
	/*
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
	*/
	Author = author;
	Title = title;
	Edition = edition;
	Editorial = editorial;
	Year = year;
}

QhatuOficialModel::Product::Product()
{

}

QhatuOficialModel::Product::Product(int productid, String^ name, String^ description, int stockTotal, double price, char status)
{
	ProductID = productid;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
}