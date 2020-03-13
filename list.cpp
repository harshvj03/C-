#include <iostream>




using namespace std;


class List{
	
	private : int id;
	

public :

	 
	void setvalue(int x)
	{
		id = x;
	}

	int getvalue(){
		return id;
	}

	
	void Addelements(int a[], int n)
	{
		cout <<"Enter the elements : ";

		for(int i = 0; i < n; i++ )
		{
			cin >> a[i];
		}
	}

	void Display(int a[])
	{
		for(int i = 0; i < id; i++ )
		{
			cout << a[i];
		}
		cout<<endl;
	}

	
};



int main()
{


	List l1;
	int n;



	cout <<"Enter the size of the list : ";
	cin >> n;
	l1.setvalue(n);
	int arr[n];
	cout << "The size of the list is ";
	cout << l1.getvalue() << endl;

	while(true){

	cout << "Enter your choice :\n1.Add\n2.Display\n3.Exit\n";
	int choice;
	cin >> choice;

	if (choice == 1){
		l1.Addelements(arr,n);	
	}

	else if(choice == 2) {
		l1.Display(arr);	
	}
	else{
		return 0;
	}



	}
	
	

	

}