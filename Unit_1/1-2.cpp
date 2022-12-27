#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char name[50];
	int i;
	
	cout << "Enter The Name :";
	cin  >> name;
	
	
	cout << endl << "Toggle Case:" << endl;
	
	for(i=0;i<strlen(name);i++){
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]+=32;
		}
	    else
		{
			name[i]-=32;
		}
	}
	cout << "\n Name :" << name << endl;	
} 
