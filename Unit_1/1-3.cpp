#include<iostream>
using namespace std;

int main(){
	int g[1000], count = 0,i;
	
	for(i=2000; i<=3000; i++)
	{
		if(i%4 == 0){
			g[count++] = i;
		}
	}
	
	cout << "Leap Year :" << endl;
	for(i=0; i<count; i++)
	{
		cout << g[i] << "\t";
	}
}
