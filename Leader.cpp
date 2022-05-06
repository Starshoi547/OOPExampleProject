#include "Leader.h"

Leader::Leader() : Worker() {
	//cout << "Call Leader default constructor..." << endl;	
	phoneNumber = "no number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, int YearsOfWork, char sex, int HoursOfWork, string phoneNumber, string e_mail) : Worker(name, age, YearsOfWork, sex, HoursOfWork) {

	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

Leader::~Leader() {
	//cout << "Call Leader destructor..." << endl;
}

string Leader::getPhoneNumber() {
	return phoneNumber;
}

void Leader::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Leader::getEmail() {
	return e_mail;
}

void Leader::setEmail(string e_mail) {
	this->e_mail = e_mail;
}

string Leader::getInfo() {
	return Worker::getInfo()
		+ "; phoneNumber = " + phoneNumber
		+ "; e-mail = " + e_mail;
}