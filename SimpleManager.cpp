#include "SimpleManager.h"


Manager::Manager(){};
Manager::Manager(string name){};

int Manager::calculateAvgYearsOfWork(Group &group){
	int avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getYearsOfWork();
	}

	avg /= group.size;
	return avg;
};
int Manager::calculateAvgAge(Group &group) {
	int avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getAge();
	}

	avg /= group.size;
	return avg;
};
int Manager::getCountOfMale(Group &group) {
	int count = 0;
	for (int i = 0; i < group.size; i++)
	{
		if (group.list[i].getSex() == 'm')
		{
			count++;
		}
	}
	return count;
};
int Manager::getCountOfFemale(Group &group) {
	return group.getSize() - getCountOfMale(group);
};

int Manager::calculateHoursEveryWeek(Group &group) {
	int count = 0;
	for (int i = 0; i < group.size; i++)
	{
		count += (group.list[i].getHoursOfWork()) * 5;
	}
	return count;
};
