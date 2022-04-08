#include "Student.h"
#include "Group.h"

int main() {
	Group group("10b");

	Student st1("Alex", 14, 9);
	Student st2("Nastya", 13, 2);
	Student st3("Nikita", 15, 10);

	group.add(st1);
	group.add(st2);
	group.add(st3);

	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getMark();
	}

	avg /= group.getSize();

	

	cout << group.getInfo() << endl;
	cout << "Avg mark of group " << avg << endl;

	return 0;
}