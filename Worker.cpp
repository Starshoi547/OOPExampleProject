#include "Worker.h"


Worker::Worker() {

}

Worker::Worker(string name, int age, int YearsOfWork, char sex, int HoursOfWork) {
	this->name = name;
	this->age = age;
	this->YearsOfWork = YearsOfWork;
	this->sex = sex;
	this->HoursOfWork = HoursOfWork;
}

string Worker::getName() {
	return name;
}

void Worker::setName(string initName) {
	this->name = name;
}

int Worker::getAge() {
	return age;
}


void Worker::setAge(int age) {
	int number = age;
	if (number >= MIN_AGE && number <= MAX_AGE) {
		this->age = age;
	}
}


int Worker::getYearsOfWork() {
	return YearsOfWork;
}

void Worker::setYearsOfWork(int YearsOfWork) {
	if (YearsOfWork > 0) {
		this->YearsOfWork = YearsOfWork;
	}
}

char Worker::getSex() {
	return sex;
}

void Worker::setSex(char sex) {
	if (sex == NULL) {

	}
}


string Worker::getInfo() {
	return name + ": age = " + to_string(age)
		+ " Years of work = " + to_string(YearsOfWork)
		+ " Hours of work per day = " + to_string(HoursOfWork);
}