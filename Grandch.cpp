#include <iostream>
#include <fstream>
#include <string>
#include "Grandch.h"

using namespace std;


Grandch::Grandch()
{
	name = '0';
	surname = '0';
	patronymic = '0';
	datee = '0';
	city = '0';
}

Grandch::Grandch(const char b[], const char n[], const char c[], const char no[], const char s[])
{
	nam = b;
	surnam = n;
	patr = c;
	dat = no;
	city = s;
}

Grandch::Grandch(Grandch& op1)
{
	nam = op1.nam;
	surnam = op1.surnam;
	patr = op1.patr;
	dat = op1.dat;
	city = op1.city;
}

Grandch::~Grandch()
{
	cout << "~Grandch" << endl;
}

void Grandch::deleted()
{
	name = '0';
	surname = '0';
	patronymic = '0';
	datee = '0';
	city = '0';
}

void Grandch::enter()
{
	cout << "Enter Full Name: ";
	cin >> nam;
	cin >> surnam;
	cin >> patr;
	cout << "Enter city: ";
	cin >> city;
	cout << "Enter Birth Day(DD.MM.YYYY): ";
	cin >> dat;

}

void Grandch::enterf(ifstream& op1)
{
	getline(op1, nam);
	getline(op1, surnam);
	getline(op1, patr);
	getline(op1, city);
	getline(op1, dat);

}

void Grandch::fileprint()
{
	cout << "This is the Grandch." << endl;
}

void Grandch::fileprintf(ofstream& op1)
{
	op1 << "---------------This is the Grandch.-----------------" << endl;
}

void Grandch::print()
{
	if (nam != "0" && surnam != "0" && patr != "0" && city != "0" && dat != "0")
	{
		this->fileprint();
		cout << "Full name: " << nam << " " << surnam << " " << patr << endl;
		cout << "Birth Day: " << dat << endl;
		cout << "City: " << city << endl;
	}

	else
	cout << "Error" << endl;
	
}

void Grandch::fprint(ofstream& op1)
{
	if (nam != "0" && surnam != "0" && patr != "0" && city != "0" && dat != "0")
	{
		this->fileprintf(op1);
		op1 << "Full name: " << nam << " " << surnam << " " << patr << endl;
		op1 << "Birth Day: " << dat << endl;
		op1 << "City: " << city << endl;
	}

	else
		cout << "Error" << endl;
}