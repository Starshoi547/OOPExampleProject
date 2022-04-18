#pragma once
#include "Header.h"
#include "Worker.h"

class Group
{
	friend class Manager;


private:
	string name;
	int size;
	double YearsOfWork;
	Worker* list;
public:
	Group();
	Group(string name);
	Group(string name, Worker &list, int size);
	~Group();

	void add(Worker &student);
	Worker get(int index);
	void set(int index, Worker &worker);
	int getSize();
	string getName();
	void setName(string name);
	string getInfo();
};

