#include "Worker.h"
#include "Group.h"
#include "SimpleManager.h"

int main() {
	Group group1("Phone Store");
	Manager manager1("Jack");

	Worker wr1("Alex", 25, 9, 'm', 8);
	Worker wr2("Nastya", 19, 2, 'f', 4);
	Worker wr3("Nikita", 81, 10, 'm', 6);

	group1.add(wr1);
	group1.add(wr2);
	group1.add(wr3);

	Group group2("Tech Shop");
	Manager manager2("Pablo");

	Worker wr4("Billy", 31, 9, 'm', 8);
	Worker wr5("Ilya", 54, 2, 'm', 6);
	Worker wr6("Diana", 32, 10, 'f', 5);
	
	group2.add(wr4);
	group2.add(wr5);
	group2.add(wr6);
	

	cout << group1.getInfo() << endl;

	int count = manager1.getCountOfFemale(group1);

	cout << "Count of female of group " << group1.getName() << " = " << count << endl;

	count = manager1.getCountOfMale(group1);

	cout << "Count of male of group " << group1.getName() << " = " << count << endl;

	count = manager1.calculateAvgAge(group1);

	cout << "Average age of group " << group1.getName() << " = " << count << endl;

	count = manager1.calculateAvgYearsOfWork(group1);

	cout << "Average years of work of group " << group1.getName() << " = " << count << endl;

	count = manager1.calculateHoursEveryWeek(group1);

	cout << "Hours of work of group " << group1.getName() << " every week = " << count << "\n" << endl;







	cout << group2.getInfo() << endl;

	count = manager2.getCountOfFemale(group2);

	cout << "Count of female of group " << group2.getName() << " = " << count << endl;

	count = manager2.getCountOfMale(group2);

	cout << "Count of male of group " << group2.getName() << " = " << count << endl;

	count = manager2.calculateAvgAge(group2);

	cout << "Average age of group " << group2.getName() << " = " << count << endl;

	count = manager2.calculateAvgYearsOfWork(group2);

	cout << "Average years of work of group " << group2.getName() << " = " << count << endl;

	count = manager2.calculateHoursEveryWeek(group2);

	cout << "Hours of work of group " << group2.getName() << " every week = " << count << endl;
	
	return 0;
}