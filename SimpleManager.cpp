#include "SimpleManager.h"

Manager::Manager(){};
Manager::Manager(string name){};

double Manager::calculateAvgYearsOfWork(Group group){
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getYearsOfWork();
	}

	avg /= group.getSize();
	return avg;
};
double Manager::calculateAvgAge(Group group) {
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getAge();
	}

	avg /= group.getSize();
	return avg;
};
int Manager::getCountOfMale(Group group) {
	int count = 0;
	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getSex() == 'm')
		{
			count++;
		}
	}
	return count;
};
int Manager::getCountOfFemale(Group group) {
	return group.getSize() - getCountOfMale(group);
};

int Manager::calculateHoursEveryWeek(Group group) {
	int count = 0;
	for (int i = 0; i < group.getSize(); i++)
	{
		count += (group.get(i).getHoursOfWork()) * 5;
	}
	return count;
};
