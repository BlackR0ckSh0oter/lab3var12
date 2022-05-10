#pragma once
#include <iostream>
#include "Parent.h"

using namespace std;

class Child : public Parent {
protected:
	string namee;
	string date;
public:
	Child();
	Child(Child& op1);
	Child(const char b[], const char n[], const char no[]);
	~Child();

	void deleted();
	void enterf(ifstream& op1);
	void enter();
	void fileprint();
	void fileprintf(ofstream& op1);
	virtual void print();
	void fprint(ofstream& op1);
};