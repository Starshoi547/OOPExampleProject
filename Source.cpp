class Zoo;

class Animal {
	friend class Zoo;
private:
	double power;
};

class Zoo {
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