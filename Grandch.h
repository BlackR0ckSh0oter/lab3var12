#pragma once
#include <iostream>
#include "Child.h"

using namespace std;

class Grandch : public Child {
protected:
	string nam;
	string surnam;
	string patr;
	string city;
	string dat;
public:
	Grandch();
	Grandch(Grandch& op1);
	Grandch(const char b[], const char n[], const char c[], const char no[], const char s[]);
	~Grandch();

	void deleted();
	void enterf(ifstream& op1);
	void enter();
	void fileprint();
	void fileprintf(ofstream& op1);
	void print() override;
	void fprint(ofstream& op1);
};