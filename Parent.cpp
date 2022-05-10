#include <iostream>
#include <fstream>
#include <cmath>
#include <locale>
#include <string>
#include "Parent.h"

using namespace std;


Parent::Parent()
{
	name = '0';
	surname = '0';
	patronymic = '0';
	datee = '0';
}

Parent::Parent(const char b[], const char n[], const char c[], const char no[], const char s[])
{
	name = b;
	surname = n;
	patronymic = c;
	datee = no;
}

Parent::Parent(Parent& op1)
{
	name = op1.name;
	surname = op1.surname;
	patronymic = op1.patronymic;
	datee = op1.datee;
}

Parent::~Parent()
{
	cout << "~Parent" << endl;
}

void Parent::deleted()
{
	name = '0';
	surname = '0';
	patronymic = '0';
	datee = '0';
}

void Parent::enter()
{
	cout << "Enter Full Name: ";
	cin >> name;
	cin >> surname;
	cin >> patronymic;
	cout << "Enter Birth Day(DD.MM.YYYY): ";
	cin >> datee;
}

void Parent::enterf(ifstream& op1)
{
	getline(op1, name);
	getline(op1, surname);
	getline(op1, patronymic);
	getline(op1, datee);
}

void Parent::fileprint()
{
	cout << "This is the Parent." << endl;
}

void Parent::fileprintf(ofstream& op1)
{
	op1 << "---------------This is the Parent.-----------------" << endl;
}

void Parent::print()
{
	if (name != "0" && surname != "0" && patronymic != "0" && datee != "0")
	{
		this->fileprint();
		cout << "Full name: " << name << " " << surname << " " << patronymic << endl;
		cout << "Birth Day: " << datee << endl;
	}
	else
		cout << "Error" << endl;
}
void Parent::pprint()
{
	if (name != "0")
	{
		cout << "Name parent: " << name << endl;
	}
	else
		cout << "Error" << endl;
}

void Parent::fprint(ofstream& op1)
{
	if (name != "0" && surname != "0" && patronymic != "0" && datee != "0")
	{
		this->fileprintf(op1);
		op1 << "Full name: " << name << " " << surname << " " << patronymic << endl;
		op1 << "Birth Day: " << datee << endl;
	}
	else
		cout << "Error" << endl;
}

void Parent::fpprint(ofstream& op1)
{
	if (name != "0")
	{
		op1 << "Name parent: " << name << endl;
	}
	else
		cout << "Error" << endl;
}
