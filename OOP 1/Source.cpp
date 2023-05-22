#include <iostream>
#include <string>
class MyClass
{
private:
	int _data; //Доступно для модификации объектам класса
public:
	int data; //Доступно для модификации только внутри класса
	//protected:
		//int data; //Доступо классу и наследникам этого класса

public:
	int Summ(int data) { //Метод
		return _data + data;
	}

};

class Product {
private:
	std::string _name;
	float _price;
public:

	Product(std::string name, float price) {//Конструктор (срабатывает 1 раз при создании объекта) Должен Быть всегда в публичном поле
		_name = name;
		_price = price;

	}

	void Print() {//Метод
		std::cout << "Name: " << _name << "\nPrice: " << _price << "\n";
	}
	void SetName(std::string name) {
		_name = name;
	}
	void SetPrice(float price) {
		_price = price;
	}

	std::string GetName() {

		return _name;
	}
	float GetPrice() {
		return _price;
	}
};

class Employee {
private:
	int _id;
	std::string _name;
public:
	Employee(std::string name, int id) {
		_name = name;
		_id = id;
	}

	void SetID(int id) {
		_id = id;
	}
	void SetName(std::string name) {
		_name = name;
	}
	int GetID() {
		return _id;
	}
	std::string GetName() {
		return _name;
	}
	void Print() {
		std::cout << "Name: " << _name << '\n';
		std::cout << "ID: " << _id << '\n';
	}
};
int main() {
	//Классы, методы и конструктор
	/*
	//MyClass myObject;
	//myObject.data = 100;

	Product prd1("Morkov",99.99f);//Инициализация полей объекта с помощью конструктора
	//prd1.SetName("Morkov");//Установка значения поля объекта через метод
	//prd1.SetPrice(99.99f);
	prd1.Print();//Вывод значений полей объекта
	std::cout<<prd1.GetName()<<'\n';//Получение значений полей объекта
	std::cout << prd1.GetPrice() << '\n';

	Product prd2("Kapusta", 66.66f);
	Product prd3("kartoshka", 55.55f);

	prd2.Print();
	prd3.Print();
	*/
	//Выделение динамической памяти объекту класса
	/*
	Employee emp1("Oleg", 12948);
	emp1.Print();
	Employee* emp2 = new Employee("Alex", 91941);//Выделение динамической памяти для объекта класса
	emp2->Print();//Синтаксис обращения к объекту в динамической памяти
	delete (emp2);
	*/
	return 0;
}