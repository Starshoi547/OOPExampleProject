#include "Worker.h"
#include "Group.h"
#include "SimpleManager.h"

int main() {
	Group group("Phone Store");
	Manager manager1("Jack");

	Worker wr1("Alex", 25, 9, 'm', 8);
	Worker wr2("Nastya", 19, 2, 'f', 4);
	Worker wr3("Nikita", 81, 10, 'm', 6);

	group.add(wr1);
	group.add(wr2);
	group.add(wr3);

	
	
	

	cout << group.getInfo() << endl;

	int count = manager1.getCountOfFemale(group);

	cout << "Count of female of group " << group.getName() << " = " << count << endl;

	count = manager1.getCountOfMale(group);

	cout << "Count of male of group " << group.getName() << " = " << count << endl;

	count = manager1.calculateAvgAge(group);

	cout << "Average age of group " << group.getName() << " = " << count << endl;

	count = manager1.calculateAvgYearsOfWork(group);

	cout << "Average years of work of group " << group.getName() << " = " << count << endl;

	return 0;
}