#include <iostream>
#include <fstream>
#include <string>
#include "Child.h"

using namespace std;

Child::Child()
{
	namee = '0';
	date = '0';
}

Child::Child(const char b[], const char n[], const char no[])
{
	namee = n;
	date = no;
}

Child::Child(Child& op1)
{
	namee = op1.namee;
	date = op1.date;
}

Child::~Child()
{
	cout << "~Child" << endl;
}

void Child::deleted()
{
	namee = '0';
	date = '0';
}

void Child::enter()
{
	cout << "Enter Full Name: ";
	cin >> namee;
	cout << "Enter Birth Day(DD.MM.YYYY): ";
	cin >> date;
}

void Child::enterf(ifstream& op1)
{
	getline(op1, namee);
	getline(op1, date);
}

void Child::fileprint()
{
	cout << "This is the Child." << endl;
}

void Child::fileprintf(ofstream& op1)
{
	op1 << "---------------This is the Child.-----------------" << endl;
}

void Child::print()
{
	if (namee != "0" && date != "0")
	{
		this->fileprint();
		cout << "Name child: " << namee << endl;
		cout << "Birth Day: " << date << endl;
	}
	else
		cout << "Error" << endl;
}

void Child::fprint(ofstream& op1)
{
	if (namee != "0" && date != "0")
	{
		this->fileprintf(op1);
		op1 << "Name child: " << namee << endl;
		op1 << "Birth Day: " << date << endl;
	}
	else
		cout << "Error" << endl;
}