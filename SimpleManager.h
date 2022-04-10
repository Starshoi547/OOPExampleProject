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

	int calculateAvgYearsOfWork(Group group);
	int calculateHoursEveryWeek(Group group);
	int calculateAvgAge(Group group);
	int getCountOfMale(Group group);
	int getCountOfFemale(Group group);
	;
};

