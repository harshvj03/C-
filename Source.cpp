#include <iostream>
using namespace std;

#ifdef IFDF
class Base {
private: void F1() { cout << "F1\n"; F2(); F3(); }
protected: void F2() { cout << "F2\n"; F1(); F3(); }
public: void F3() { cout << "F3\n"; F1(); F2();}
};
class Derived : private Base {
private: void F4() { cout << "F4\n"; F2(); F3(); F5(); F6(); }
protected: void F5() { cout << "F5\n"; /*F1();*/ F3(); F4(); F6(); }
public: void F6() { cout << "F6\n"; /*F1();*/ F2(); F4(); F5(); }
};


int main() {
	Base b;
	//b.F1();
	//b.F2();
	b.F3();

	Derived d;
	//d.F1();
	//d.F2();
	//d.F3();
	//d.F4();
	//d.F5();
	d.F6();

	return 0;
}
#endif