#include "Student.h"

Student::Student() {

}

Student::Student(string name, string age) {
	this->name = name;
	this->age = age;
}

string Student::getName() {
	return name;
}

void Student::setName(string initName) {
	this->name = name;
}

int Student::getAge() {
	return stoi(age);
}

void Student::setAge(int age) {
	if (age >= 14 && age <= 80) {
		this->age = to_string(age);
	}
}

void Student::setAge(string age) {
	int number = stoi(age);
	if (number >= 14 && number <= 80) {
		this->age = age;
	}
}

string Student::getStringAge() {
	return age;
}

string Student::getInfo() {
	return name + ": age = " + age;
}