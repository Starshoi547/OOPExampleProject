#include "SimpleManager.h"

Manager::Manager(){};
Manager::Manager(string name){};

double Manager::calculateAvgMark(Group group){
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getMark();
	}

	avg /= group.getSize();
	return avg;
};
double Manager::calculateAvgAge(Group group) {
	return 0;
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
