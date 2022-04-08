#include "Group.h"

Group::Group() {
	name = "No group name";
	size = 0;
	list = NULL;
}
Group::Group(string name){
	this->name = name;
	size = 0;
	list = NULL;
}
Group::Group(string name, Student* list, int size){
	this->name = name;
	this->size = size;
	this->list = list;
};
Group::~Group(){};


int Group::getSize() {
	return size;
};
string Group::getName() {
	return name;
};
void Group::setName(string name) {
	this->name = name;
};


Student Group::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Student("", 0, 0);
	}
	else {
		return list[index];
	}
};
void Group::set(int index, Student student) {
		if (list != NULL && index < 0 && index >= size) {
			list[index] = student;
		}
	
}

void Group::add(Student student) {
	if (list == NULL) {
		list = new Student[1];
		size = 1;
		list[0] = student;
	}
	else {
		Student* temp = new Student[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = student;
		size++;
		delete[] list;
		list = temp;
	}
};

string Group::getInfo() {
	if (list == NULL)
	{
		return "Group" + name + " is empty.";
	}
	else {
		string msg = "Students of group " + name + ":\n";
		for (int i = 0; i < size; i++)
		{
			msg += list[i].getInfo() + "\n";
		}
		return msg;
	}
};
