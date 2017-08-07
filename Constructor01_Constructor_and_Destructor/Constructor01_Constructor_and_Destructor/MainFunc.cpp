/*
*
* @file		MainFunc.cpp
* @date     Mon Aug  7 16:32:37 2017
* @author   keea
*/

#include <stdio.h>
#include <string.h>

class KPeople
{
public:
	int age; //data member
	char name[12];

	 KPeople() { //constructor
		age = 0;
		name[0] = 0;
		printf("constructor()\r\n");
	}

	 ~KPeople() { //destructor
		//age = 0;
		printf("destructor()\r\n");
	}

	void PrintPeople() { //member function
		printf("%s : %i\r\n", name, age);
	}

	void SetAge(int _age) { 
		age = _age;
	}

	void SetName(const char* _name) {
		strcpy(name, _name);
	}
};

void main() {
	KPeople * p;
	
	//p = (KPeople *)operator new(sizeof(KPeople)); //new function
	//p->KPeople::KPeople();
	p = new KPeople; // new expression

	//p->SetAge(48);
	//p->SetName("John");
	p->PrintPeople();

	//p->KPeople::~KPeople();
	//operator delete(p); //delete function
	delete p; //delete expression
}