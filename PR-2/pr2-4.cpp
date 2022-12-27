#include<iostream>
using namespace std;

int mul(int n)
{
	for(int i=1; i<=10; i++)
	{
		cout <<"\t" << n << " * " << i << " = " << n*i << endl;
	}
}

int main()
{
	int n;
	
	cout << "Entre The n :";
	cin  >> n;
	
	cout << endl;
	
	mul(n);
}
