#pragma once
#include "Worker.h"


class SuperWorker : public Worker
{
private:
	string abilityToWork;
	string levelOfCleverness;

public:
	SuperWorker();
	SuperWorker(string name, int age, int YearsOfWork, char sex, int HoursOfWork, string abilityToWork, string e_mail);
	~SuperWorker();

	string getAbilityToWork();
	void setAbilityToWork(string abilityToWork);

	string getLevelOfCleverness();
	void setLevelOfCleverness(string levelOfCleverness);

	string getInfo();
};

