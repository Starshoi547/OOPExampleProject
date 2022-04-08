#pragma once
#include "Header.h"

class Student {
private:
	string name;
	string age;	

public:
	Student();
	Student(string name, string age);	
	string getName();
	void setName(string initName);
	int getAge();
	void setAge(int age);
	void setAge(string age);
	string getStringAge();
	string getInfo();
};