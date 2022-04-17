#include <iostream>
using namespace std;



/*
Example 2;

class Hero {
	friend void main();

public:
	int* weaks;
	int size;

	Hero() {
		size = 5;
		weaks = new int[size];
	}

	~Hero() {
		delete[] weaks;
		size = 0;
	}
};

void somethingStrange(Hero* hero) {
	//...
}

void main() {
	Hero hero;
	for (int i = 0; i < hero.size; i++)
	{
		hero.weaks[i] = i;
	}

	somethingStrange(&hero);

	for (int i = 0; i < hero.size; i++)
	{
		cout << hero.weaks[i] << endl;
	}

}

*/



/*
Example 1;

class Zoo;
class Shop;
class Animal;

class Animal {
	friend class Zoo;
	friend class Shop;
private:
	double power;
};

class Zoo {
	friend class Shop;

private:
	int countOfAnimal;
;
public:
	void add(Animal animal);
};

	void Zoo::add(Animal animal) {
		double pow = animal.power;
	}

class Shop {
public:
	void add(Animal animal) {

	}
};
*/