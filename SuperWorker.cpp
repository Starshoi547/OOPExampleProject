/*#include "SuperWorker.h"

SuperWorker::SuperWorker() : Worker() {
	//cout << "Call Leader default constructor..." << endl;	
	levelOfCleverness = 0;
	abilityToWork = "no ability";
}

SuperWorker::SuperWorker(string name, int age, int YearsOfWork, char sex, int HoursOfWork, string abilityToWork, int levelOfCleverness) : Worker(name, age, YearsOfWork, sex, HoursOfWork) {

	this->levelOfCleverness = levelOfCleverness;
	this->abilityToWork = abilityToWork;
}

SuperWorker::~SuperWorker() {
	//cout << "Call Leader destructor..." << endl;
}

string SuperWorker::getInfo() {
	return Worker::getInfo()
		+ "; levelOfCleverness = " + to_string(levelOfCleverness)
		+ "; abilityToWork = " + abilityToWork;
}
*/