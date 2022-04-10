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
Group::Group(string name, Worker* list, int size){
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


Worker Group::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Worker("", 0, 0, ' ', 0);
	}
	else {
		return list[index];
	}
};
void Group::set(int index, Worker worker) {
		if (list != NULL && index < 0 && index >= size) {
			list[index] = worker;
		}
	
}

void Group::add(Worker worker) {
	if (list == NULL) {
		list = new Worker[1];
		size = 1;
		list[0] = worker;
	}
	else {
		Worker* temp = new Worker[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = worker;
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
		string msg = "Workers of group " + name + ":\n";
		for (int i = 0; i < size; i++)
		{
			msg += list[i].getInfo() + "\n";
		}
		return msg;
	}
};
