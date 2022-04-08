#include "Student.h"

int main() {
	Student st1("Alex", "14");
	Student st2("Nastya", "13");
	Student st3("Nikita", "15");

	st1.setName("Alex");
	st2.setName("Kate");
	st3.setName("Peter");
	
	int dependency = st1.getAge();

	cout << st1.getInfo() << endl;

	return 0;
}