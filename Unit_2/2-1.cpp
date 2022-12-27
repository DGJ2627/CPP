#include<iostream>
using namespace std;

inline int fact(int a){
	if (a<=1){
		return 1;
	}
	else {
		return a * fact(a-1);
	}
}

int main(){
	
	int f,i,n,ans;
	
	cout << "Enter the size of array:";
	
	cin >>n;
	
	int a[n];
	
	for(i=0;i<n;i++){
		cout << "Enter a ["<<i<<"]:";
		
		cin >> a[i]; 
		
		f = fact(a[i]);
		
		cout << a[i] <<" Factorial Number " << f << endl << endl << endl;
	}
	
}
