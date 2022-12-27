#include<iostream>
using namespace std;

int swap(int a[10], int b[10], int n)
{
	for(int i=0; i<n; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
}

int main()
{
	int n;
	
	cout << "Enter The Size Of n :";
	cin  >> n;
	
	int a[n];
	int b[n];
	
	cout << endl << endl;
	for(int i=0; i<n; i++)
	{
		cout << "Enter The Array of a["<<i<<"]:";
		cin  >> a[i];
	}
	
	cout << endl << endl;
	for(int i=0; i<n; i++)
	{
		cout << "Enter The Array of b["<<i<<"]:";
		cin  >> b[i];
	}
	
	swap(a,b,n);
	
	cout << endl << "--: Display Swap :--" << endl << endl;
	for(int i=0; i<n; i++)
	{
		cout << " First Array a["<<i<<"]:" << a[i] << endl;
	}
	
	cout << endl << endl;
	
	for(int i=0; i<n; i++)
	{
		cout << " seconf Array b["<<i<<"]:"<< b[i] << endl;
	}
}


