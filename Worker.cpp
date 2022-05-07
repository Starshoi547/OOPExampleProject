#include "Worker.h"


int	Worker::count = 0;

Worker::Worker() {
	name = "None";
	age = 0;
	YearsOfWork = 0;
	sex = 'u';
	HoursOfWork = 0;

}

Worker::Worker(string name, int age, int YearsOfWork, char sex, int HoursOfWork) {
	count++;
	this->name = name;
	this->age = age;
	this->YearsOfWork = YearsOfWork;
	this->sex = sex;
	this->HoursOfWork = HoursOfWork;
}

Worker::~Worker() {
	count--;
	}

int Worker::getCount() {
	return count;
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
	if (YearsOfWork >= MIN_YEARS_OF_WORK) {
		this->YearsOfWork = YearsOfWork;
	}
	if (YearsOfWork < MIN_YEARS_OF_WORK) {
		this->YearsOfWork = MIN_YEARS_OF_WORK;
	}
}

int Worker::getHoursOfWork() {
	return HoursOfWork;
}

void Worker::setHoursOfWork(int YearsOfWork) {
	if (HoursOfWork >= 4) {
		this->HoursOfWork = HoursOfWork;
	}
};

char Worker::getSex() {
	return sex;
}

void Worker::setSex(char sex) {
	if (sex == NULL) {
		sex = 'U';
		this->sex = sex;
	}
	else {
		this->sex = sex;
	}
}




string Worker::getInfo() {
	return name + ": age = " + to_string(age)
		+ " sex = " + (sex == 'm' ? "male" : "female")
		+ " Years of work = " + to_string(YearsOfWork)
		+ " Hours of work per day = " + to_string(HoursOfWork);
}