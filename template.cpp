#include <iostream>

using namespace std;


template <class A, class B>
class Complex{
	A real;
	B img;

public : 
		Complex(A x,B y)
		{
			real = x;
			img = y;
		}

		Complex operator + (Complex const &obj){
			Complex res;

			res.real = real + obj.real;
			res.img = img + obj.img;
			return res;	
		}

		void show()
		{
			cout << real << " " << img << "i" << endl;
		}
	
	
	Complex(){ }
};



class A(){

	int a;
	int b;
};

template <typename T>
T myMax(T x,T y){
	return (x > y)? x: y; 
}



int main() 
{ 
	//Complex c1;
  cout << myMax<int>(3, 7) << endl;  // Call myMax for int 
  cout << myMax<char>('g', 'e') << endl;   // call myMax for char 
  Complex<int,int>c1(3,4);
  Complex<int,float>c2(3,5.5f);
  Complex<int,int>c3(4,3);
  Complex<int,int>c4(0,0);

  c1.show();
  c2.show();

  c4 = c1 + c3;

  c4.show();



  return 0; 
}
