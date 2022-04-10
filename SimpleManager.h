#pragma once
#include "Header.h"
#include "Group.h"


class Manager
{
private:
	string name
	;
public:
	Manager();
	Manager(string name);

	double calculateAvgYearsOfWork(Group group);
	double calculateAvgAge(Group group);
	int getCountOfMale(Group group);
	int getCountOfFemale(Group group);
	;
};

