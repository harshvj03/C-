#include <iostream>

using namespace std;


void Readmatrix(int **p,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> p[i][j];
		}
	}
}


void Writematrix(int **p,int n,int m)
{
	for(int i = 0; i< n; i++)
	{
		for(int j=0;j<m;j++)
		{
			cout <<p[i][j] <<" ";
		}
	}
}

void Addmatrix(int **p,int n, int m,int x)
{
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				p[0][j][k] = p[0][j][k] + p[i][j][k];
			}
		}
	}
	cout << "Sum is : \n";
	Writematrix(p,n,m);
}


int main()
{
	int x,n,m;

	int ***p;

	cout << "Enter the no. of arrays : ";
	cin >> x;

	cout << "Enter the no. of rows : ";
	cin >> n;

	cout << "Enter the no. of column : ";
	cin >> m;

	cout << "Enter the no. of elements : ";

	p = (int ***)malloc(x*sizeof(int**));

	for(int i = 0;i<x;i++)
	{
		p[i]=(int**)malloc(n*sizeof(int*));
		for(int j=0;j<n;j++)
		{
			p[i][j] = (int*)malloc(x*sizeof(int));
		}
	}

	for(int i=0;i<x;i++)
	{
		Readmatrix(p[i],n,m);
	}

	cout << "The elements entered are : \n";
		for(int j=0;j<x;j++)
		{
			Writematrix(p[j],n,m);
			cout << "\n";
		}

		Addmatrix(p,n,m,x);

}