#pragma once
#include "Header.h"
#include "Student.h"

class Group
{
private:
	string name;
	int size;
	Student* list;
public:
	Group();
	Group(string name);
	Group(string name, Student* list, int size);
	~Group();

	void add(Student student);
	Student get(int index);
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
};

