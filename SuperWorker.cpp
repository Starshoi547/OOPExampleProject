#include "SuperWorker.h"

SuperWorker::SuperWorker() : Worker() {
	//cout << "Call SuperWorker default constructor..." << endl;	
	abilityToWork = "-1";
	levelOfCleverness = "1 IQ";
}

SuperWorker::SuperWorker(string name, int age, int YearsOfWork, char sex, int HoursOfWork, string abilityToWork, string levelOfCleverness) : Worker(name, age, YearsOfWork, sex, HoursOfWork) {

	this->abilityToWork = abilityToWork;
	this->levelOfCleverness = levelOfCleverness;
}

SuperWorker::~SuperWorker() {
	//cout << "Call SuperWorker destructor..." << endl;
}

string SuperWorker::getAbilityToWork() {
	return abilityToWork;
}

void SuperWorker::setAbilityToWork(string abilityToWork) {
	this->abilityToWork = abilityToWork;
}

string SuperWorker::getLevelOfCleverness() {
	return levelOfCleverness;
}

void SuperWorker::setLevelOfCleverness(string levelOfCleverness) {
	this->levelOfCleverness = levelOfCleverness;
}

string SuperWorker::getInfo() {
	return Worker::getInfo()
		+ "; Ability to work = " + abilityToWork
		+ "; Level of Cleverness = " + levelOfCleverness;
}