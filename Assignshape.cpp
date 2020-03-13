#include <iostream>

using namespace std;

struct Point{
	int x;
	int y;
	int a;
	int b;
};

class Shape{
	protected :
		Point * pts;
		int count;
		char shapeType;

	public : 

		Shape(int n,char type)
		{
			count = n;
			shapeType = type;
		}
		~Shape()
		{

		}
		void Move(int x,int y)
		{

		}
		void Draw()
		{

		}
		void Erase()
		{

		}
		char GetType()
		{

		}
};


class Line : public Shape
{
	public  :
	
	void SetPoints(int x1,int y1,int x2,int y2)
	{
			pts[0].x = x1;
			pts[0].y = y1;
			pts[1].x = x2;
			pts[1].y = y2;
	}
	Line() : Shape(2,'l')
	{

	}



	void Draw()
	{
		cout << "Draw a line " << pts[0].x << pts[0].y << pts[1].x << pts[1].y << endl;

	}

	void Erase()
	{
		cout << "Erase " << pts[0].x << pts[0].y << pts[1].x << pts[1].y << endl; 
	}


	
    void setPTS(Point *p){
     	pts=p;
     }
     Point * getPTS(){
     	return pts;
     }

	void Move(int x,int y)
	{
		for(int i=0;i<count;i++)
		{
		
				pts[i].x += x;

				pts[i].y += y;
			

		}
	}

	~Line(){
		//delete [] pts;	
	}
};

class Rectangle : public Shape
{
	public:
	void SetPoints(int x1,int x2, int x3,int x4,int y1,int y2,int y3,int y4)
	{
			pts[0].x = x1;
			pts[0].y = y1;
			pts[1].x = x2;
			pts[1].y = y2;
			pts[2].x = x3;
			pts[2].y = y3;
			pts[3].x = x4;
			pts[3].y = y4;

	}
	
	 Rectangle() : Shape(4,'r')
	{

	}

	void Draw()
	{
		cout << "Draw a Rectangle " << pts[0].x << pts[0].y << pts[1].x << pts[1].y <<pts[2].x << pts[2].y << pts[3].x << pts[3].y << endl;

	}

	void Erase()
	{
		cout << "Erase Rectangle " <<pts[0].x << pts[0].y << pts[1].x << pts[1].y <<pts[2].x << pts[2].y << pts[3].x << pts[3].y << endl; 
	}

	void setPTS(Point *p){
     	pts=p;
     }
     Point * getPTS(){
     	return pts;
     }


     void Move(int x,int y, int a, int b)
	{
		for(int i=0;i<count;i++)
		{
		
				pts[i].x += x;
				pts[i].y += y;
				pts[i].a += a;
				pts[i].b += b;
			

		}
	}

	~Rectangle(){
		//delete [] pts;
	}



};

int main(){

	Line l1;
	


	Shape  *p[100];
	int n = 0;

	int choice;
	cout << "Enter your choice : ";
	cin >> choice;

	p[0] = new Line();
	Point pts[2];
	Point p1;
	Point p2;//=new Point();
	pts[0]=p1;
	pts[1]=p2;
	((Line*)p[0])->setPTS(pts);
	((Line*)p[0])->SetPoints(2,2,4,4);
	((Line*)p[0])->Draw();
	((Line*)p[0])->Move(1,1);
	((Line*)p[0])->Erase();

	p[1] = new Rectangle();

	Point pts1[4];

	Point p3,p4,p5,p6;

	pts1[0] = p3;
	pts1[1] = p4;
	pts1[2] = p5;
	pts1[3] = p6;

	((Rectangle*)p[1])->setPTS(pts1);
	((Rectangle*)p[1])->SetPoints(2,2,4,4,6,6,8,8);
	((Rectangle*)p[1])->Draw();
	((Rectangle*)p[1])->Move(1,1,1,1);
	((Rectangle*)p[1])->Erase();


	//delete [] p;
	//((Line*)p[0])-> SetPoints(2,2,4,4);

	/*if(choice == 1)
	{
		pts[n] =new Line();
	}
	*/

	return 0;


}