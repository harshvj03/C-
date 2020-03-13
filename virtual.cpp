#include <iostream>
using namespace std;

class Base {
public: int i;
public: Base() { cout << "Base::Base\n"; }
	  virtual ~Base() { cout << "Base::~Base\n"; }
	  virtual void WhoAmI() { cout << "Base\n"; }
};
class Derived : public Base {
public: int j;
public: Derived() { cout << "Derived::Derived\n"; }
	  ~Derived() { cout << "Derived::~Derived\n"; }
	  void WhoAmI() { cout << "Derived\n"; }
};

int main() {
	Base* pb;
	cout << "1 - Base, 2 - Derived: ";
	int choice;
	cin >> choice;
	if (choice == 1)
		pb = new Base;
	else
		pb = new Derived;

	pb->WhoAmI();
	delete pb;

	return 0;
}