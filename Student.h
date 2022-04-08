#pragma once
#include "Header.h"

class Student {
private:
	string name;
	int age;
	double mark;
	char sex;

public:
	Student();
	Student(string name, int age, double mark, char sex);
	string getName();
	void setName(string initName);
	int getAge();
	void setAge(int age);
	double getMark();
	void setMark(double mark);
	void setSex(char sex);
	char getSex();

	string getInfo();

};