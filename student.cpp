#include <iostream>
#include<string>
class FIO {
	std::string name;
	std::string surname;
	std::string patronymic;
};
FIO:
	FIO()
	{
		
	};
	FIO(string surname, string name, string patronymic)
	{
		//cout << this << " Person constructor(string name)" << endl;
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
	};

	FIO(const FIO& p)
	{
		//cout << this << "  copy constructor" << endl;
		this->name = p.name;
		this->surname = p.surname;
		this->patronymic = p.patronymic;

	};
	~FIO()
	{
		//cout << this << "  destructor" << endl;

	}

	string getFIO() {
		return this->surname + " " + this->name + " " + this->patronymic;
	}

	//переопределение операторов

	Person& operator=(const Person& p)
	{
		this->name = p.name;
		this->surname = p.surname;
		this->patronymic = p.patronymic;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Person& p);
	friend istream& operator>>(istream& is, Person& p);

};