#pragma once
#pragma once
#include "Worker.h"


class Leader : public Worker
{
private:
	string phoneNumber;
	string e_mail;

public:
	Leader();
	Leader(string name, int age, int YearsOfWork, char sex, int HoursOfWork, string phoneNumber, string e_mail);
	~Leader();

	string getPhoneNumber();
	void setPhoneNumber(string phoneNumber);

	string getEmail();
	void setEmail(string e_mail);

	string getInfo();
};

