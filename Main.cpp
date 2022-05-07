#include <ctime>
#include "Worker.h"
#include "Group.h"
#include "SimpleManager.h"
#include "Leader.h"
#include "SuperWorker.h"



void changeYearsOfWork(Worker& wr) {
	srand(time(NULL));
	// [rand() % (max - min + 1)] + min
	//wr->setYearsOfWork(rand() % 15 + 1);
	//wr.setYearsOfWork(rand() % 15 + 1);
	int YearsOfWork = rand() % 15 + 1; //Only if function is 'friend' to Class
	wr.YearsOfWork = YearsOfWork;
}

void testing(Worker** list, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << list[i]->getInfo() << endl;
	}
	
}


int main() {
	int const SIZE = 10;

	Worker** list = new Worker * [SIZE];

	list[0] = new Worker("Kate", 15, 6, 'f', 6);

	list[1] = new Leader("Karl", 15, 8, 'f', 6, "+375456789054", "peter@tut.by");

	list[2] = new SuperWorker("Karl", 15, 8, 'f', 6, "5", "100 IQ");

	//Group group1("Phone Store");
	//Manager manager1("Jack");

	testing(list, SIZE);




	
	
	//group1.add(wr1);
	//group1.add(wr2);
	//group1.add(wr3);
	

	//Group group2("Tech Shop");
	//Manager manager2("Pablo");

	//Worker wr4("Billy", 31, 9, 'm', 8);
	//Worker wr5("Ilya", 54, 2, 'm', 6);
	//Worker wr6("Diana", 32, 10, 'f', 5);
	
	
	//group2.add(wr4);
	//group2.add(wr5);
	//group2.add(wr6);
	
	
	//cout << "Count: " << Worker::getCount() << "\n" << endl;      >>Do not WORKING for some reason

	//cout << group1.getInfo() << endl;

	//int count = manager1.getCountOfFemale(group1);

	//cout << "Count of female of group " << group1.getName() << " = " << count << endl;

	//count = manager1.getCountOfMale(group1);

	//cout << "Count of male of group " << group1.getName() << " = " << count << endl;

	//count = manager1.calculateAvgAge(group1);

	//cout << "Average age of group " << group1.getName() << " = " << count << endl;

	//count = manager1.calculateAvgYearsOfWork(group1);

	//cout << "Average years of work of group " << group1.getName() << " = " << count << endl;

	//count = manager1.calculateHoursEveryWeek(group1);

	//cout << "Hours of work of group " << group1.getName() << " every week = " << count << "\n" << endl;







	//cout << group2.getInfo() << endl;

	//count = manager2.getCountOfFemale(group2);

	//cout << "Count of female of group " << group2.getName() << " = " << count << endl;

	//count = manager2.getCountOfMale(group2);

	//cout << "Count of male of group " << group2.getName() << " = " << count << endl;

	//count = manager2.calculateAvgAge(group2);

	//cout << "Average age of group " << group2.getName() << " = " << count << endl;

	//count = manager2.calculateAvgYearsOfWork(group2);

	//cout << "Average years of work of group " << group2.getName() << " = " << count << endl;

	//count = manager2.calculateHoursEveryWeek(group2);

	//cout << "Hours of work of group " << group2.getName() << " every week = " << count << endl;
	





	

	return 0;
}
