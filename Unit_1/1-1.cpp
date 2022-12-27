#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout << "Enter the array:";
	cin >> n;
	int g[n];
	for (i=0;i<n;i++){
		cout << "Enter the array :" << i << endl;
		cin >> g[i];
	}
	
	cout << "Array:";
	for (i=0; i<n; i++){
		cout << endl<< g[i];
	}
}
