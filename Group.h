#pragma once
#include "Header.h"
#include "Student.h"

class Group
{
private:
	string name;
	int size;
	double mark;
	Student* list;
public:
	Group();
	Group(string name);
	Group(string name, Student* list, int size);
	~Group();

	void add(Student student);
	Student get(int index);
	void set(int index, Student student);
	int getSize();
	string getName();
	void setName(string name);
	void sortByStudentNameAsc();
	void sortByStudentNameDesc();
	void sortByStudentMarkAsc();
	void sortByStudentMarkDesc();
	Student getMaxAgeStudent();
	Student getMinAgeStudent();
	double calcAvgAgeOfStudents();
	string getInfo();
};

