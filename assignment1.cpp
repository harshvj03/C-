#include <iostream>

using namespace std;

struct Point {

	int x;
	int y;
};


class Shape {

protected:

	Point * pts;
	int ptsCount;
public:
	Shape(int n)
	{
		pts = new Point[n];
	}

	virtual ~Shape(){
		delete []pts;
	}
	void Move(int x, int y){}
	virtual void Draw(){}
	virtual void Erase(){}
	virtual void SetPoints(Point *pt, int n){}


};

class  Line : public Shape {

public:
	Line():Shape(2){}

	void SetPoints(Point *pt)
	{
		cout << "Set Point for Line ";
		for(int i=0;i<2;i++)
		{
			cin >> pts[i].x ;
			cin >> pts[i].y ;
		}

	}

	void Draw()
	{
		cout << "You are in Draw fn  of Line class\n";
		for(int i = 0; i<2;i++)
		{
			cout << pts[i].x << pts[i].y;

		}

	}

	

	void setPTS(Point *p){
     	pts=p;
     }
  
    Point * getPTS(){
     	return pts;
     }

	void Move(int x,int y)
	{
		for(int i=0;i<ptsCount;i++)
		{
		
				pts[i].x += x;
				pts[i].y += y;
		}
	}

	void Erase()
	{
		cout << "you are in erase of line";
		for(int i = 0;i< 2;i++)
		{
			pts[i].x = 0;
			 pts[i].y = 0;
		}

		cout << "After erasing : ";
		for(int i = 0;i< 2;i++)
		{
			cout <<pts[i].x;
			cout <<pts[i].y;
		}

	}

	~Line(){
	}

};


class Rectangle : public Shape
{
	public : Rectangle () : Shape(4){}

	void SetPoints(Point *pt)
	{
		cout << "Enter the points for Rectangle : \n";
		for(int i = 0;i<4;i++)
		{
			cin >> pts[i].x;
			cin >> pts[i].y; 
		}
	} 

	void Draw()
	{
		cout << "You are in draw of Rectangle fn \n";
		for(int i = 0;i< 4;i++)
		{
			cout << pts[i].x;
			cout << pts[i].y;
		}
	}

	void Erase()
	{
		cout << "you are in erase of Rectangle";
		for(int i = 0;i< 4;i++)
		{
			pts[i].x = 0;
			 pts[i].y = 0;
		}

		cout << "After erasing : ";
		for(int i = 0;i< 4;i++)
		{
			cout <<pts[i].x;
			cout <<pts[i].y;
		}

	}


};


/*class Polygon : public Shape
{
	public : Polygon () : Shape(ptsCount) {}
	
	void SetPoints(Point *pt)
	{
		cout << "Set Point for Line ";
		for(int i=0;i<ptsCount;i++)
		{
			cin >> pts[i].x ;
			cin >> pts[i].y ;
		}

	}

	void Draw()
	{
		for(int i=0;i<ptsCount;i++)
		{
			cout << pts[i].x ;
			cout << pts[i].y <<"\n" ;
		}
	}


};
*/

int main ()
{
	Line l1;

	Rectangle r1;

	Shape* sd; 

	/*int choice;
	cout<<"Enter no of elements";
	cin>>choice
	int arr[];

	cout<<"Enter the numbers";

	for (int i = 0; i < choice; ++i)
	{
		cin>>arr[i];
	}*/
	while(true)
	{

		int choice,s;
	cout << "Enter your choice : 1 - Line , 2 - Rectangle, 3 - Polygon \n ";
	cin >> choice;
	Point p[2];
	Point p1[4];

	if(choice == 1)
		{
			sd = new Line;
			l1.SetPoints(p);
			l1.Draw();
		}
		else if(choice == 2)
		{
			sd = new Rectangle;
			r1.SetPoints(p1);
			r1.Draw();
		}
		else if (choice == 3)
		{
			int choice_erase;
			cout <<"Enter to erase 1 - Line , 2 - Rectangle : ";
			cin >> choice_erase;

		if (choice_erase == 1)
		{
			sd->Erase();
		}
		else if (choice_erase == 2)
		{
			sd->Erase();
		}


		}
	
	}
	

	
	
	
	
}