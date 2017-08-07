/*
*
* @file		MainFunc.cpp
* @date     Mon Aug  7 17:08:38 2017
* @author   keea
*/

#include <stdio.h>
#include <string.h>

class KPeople
{
public:
	int age;
	char name[12];

	KPeople() { //default constructor
		age = 0;
		name[0] = 0;
		printf("constructor()\r\n");
	}

	explicit KPeople(const char* _name) { //overloading
		age = 0;
		strcpy(name, _name);
		printf("constructor()\r\n");
	}

	~KPeople() { 
		printf("destructor()\r\n");
	}

	void PrintPeople() {
		printf("%s : %i\r\n", name, age);
	}

	void SetAge(int _age) {
		age = _age;
	}

	void SetName(const char* _name) {
		strcpy(name, _name);
	}
};

void Test(KPeople p) {
	p.PrintPeople();
}

void main() {
	KPeople p("John"); // implicit construction call
	KPeople temp = KPeople("Mike");
	Test(KPeople("Mike")); //temporary object
}