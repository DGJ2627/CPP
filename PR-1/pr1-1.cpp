#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char name[50];
	int n,i;
	
	cout << "Enter The Your Name :";
	cin  >> name;
	
	n = strlen(name);
	
	
	    if(name[i]>='0' && name[i]<='9')
		{
			cout << "Numeric String" << endl;
		}
		else {
			cout << "This is string :" << name << endl;
		}
			
	
	
	
}
