#pragma once
#include <iostream>

using namespace std;

class Parent
{
public:
    Parent();
    ~Parent();
    Parent(const char b[], const char n[], const char c[], const char no[], const char s[]);
    Parent(Parent& op1);
    void enter();
    void enterf(ifstream& op1);
    void fileprint();
    void fileprintf(ofstream& op1);
    virtual void print();
    void pprint();
    void fprint(ofstream& op1);
    void fpprint(ofstream& op1);
    void deleted();
protected:
    string name;
    string surname;
    string patronymic;
    string datee;
};