#include <iostream>
using namespace std;

class Base {
public: int i;
public: const char typeName;
protected: Base(char t) : typeName(t) { cout << "Base::Base(char)\n"; }
public: Base() : typeName('B') { cout << "Base::Base\n"; }
~Base() { cout << "Base::~Base\n"; }
void WhoAmI() { cout << "Base\n"; }
};
class Derived : public Base {
public: int j;
public: Derived() : Base('D') { cout << "Derived::Derived\n"; }
~Derived() { cout << "Derived::~Derived\n"; }
void WhoAmI() { cout << "Derived\n"; }
};

int M2() {
	Base b;
	Derived d;
	return 0;
}

int M1() {
	Base* pb;
	cout << "1 - Base, 2 - Derived: ";
	int choice;
	cin >> choice;
	if (choice == 1)
		pb = new Base;
	else
		pb = new Derived;
	cout << pb->typeName << "\n";
	if (pb->typeName == 'D') {
		((Derived*)pb)->WhoAmI();
		delete (Derived*)pb;
	} else {
		pb->WhoAmI();
		delete pb;
	}
	return 0;
}

int main() {
	Base b;
	Base& rb = b;
	Base* pb;
	pb = &b;
	Derived d;
	Derived& rd = d;
	Derived* pd;
	pd = &d;

	b.WhoAmI();
	rb.WhoAmI();
	pb->WhoAmI();

	d.WhoAmI();
	rd.Derived::WhoAmI(); //rd.WhoAmI();
	pd->Base::WhoAmI();

	pb = &d;
	Base& rb1 = d;
	((Derived*)pb)->WhoAmI();//pb->Derived::WhoAmI();
	rb1.WhoAmI();

	return 0;
}
