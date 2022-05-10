#include "Parent.h"
#include "Child.h"
#include "Grandch.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin1("Parent.txt");
	ifstream fin2("Child.txt");
	ifstream fin3("Grandch.txt");
	ofstream fout("Result.txt");

	Parent* P = new Parent;
	Child* C = new Child;
	Grandch* G = new Grandch;

	char menu;
	char submenu;
	bool exit = true;
	int id = 0;

	do
	{
		system("cls");
		cout << "Menu:" << endl;
		cout << "1. Parent" << endl;
		cout << "2. Child" << endl;
		cout << "3. Grandch" << endl;
		cout << "4. Print" << endl;
		cout << "5. Exit" << endl;
		cout << ">";
		cin >> id;
		switch (id)
		{

		case 1:
			system("cls");
			cout << "1. Read Parent from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Save information in the result file." << endl;
			cout << "5. Delete." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case '1':
				P->enterf(fin1);
				system("Pause");
			case '2':
				P->enter();
				system("Pause");
				break;
			case '3':
				P->print();
				system("Pause");
				break;
			case '4':
				P->fprint(fout);
				system("Pause");
				break;
			case '5':
			    P->deleted();
				system("Pause");
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "1. Read Child from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Save information in the result file." << endl;
			cout << "5. Delete." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case '1':
				C->enterf(fin2);
				system("Pause");
				break;
			case '2':
				C->enter();
				system("Pause");
				break;
			case '3':
				C->print();
				P->pprint();
				system("Pause");
				break;
			case '4':
				C->fprint(fout);
				P->fpprint(fout);
				system("Pause");
				break;
			case '5':
				C->deleted();
				system("Pause");
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "1. Read Grandch from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Save information in the result file." << endl;
			cout << "5. Delete." << endl;
			cout << ">";
			cin >> submenu;
			switch (submenu) {
			case '1':
				G->enterf(fin3);
				system("Pause");
				break;
			case '2':
				G->enter();
				system("Pause");
				break;
			case '3':
				G->print();
				system("Pause");
				break;
			case '4':
				G->fprint(fout);
				system("Pause");
				break;
			case '5':
				G->deleted();
				system("Pause");
				break;
			}
			break;
		case 4:
			cout << ifstream("result.txt").rdbuf();
			system("Pause");
			break;
		case 5:
			exit = false;
			break;
		}
	} while (exit);


	fin1.close();
	fin2.close();
	fin3.close();
	fout.close();
	system("Pause");
	return 0;
}