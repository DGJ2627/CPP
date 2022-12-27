#include<iostream>
using namespace std;

int sum(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}
int mod(int a, int b){
	return a%b;
}
int main(){
	int a,b,n,ans;
	
	cout << "1. Addition:" << endl;
	cout << "2. Subtraction:" << endl;
	cout << "3. Multiplication:" << endl;
	cout << "4. Division:" << endl;
	cout << "5. Moduls:" << endl;
	cout << "6. Exit:" << endl;
	
	do{
		cout << "Enter choice:";
		cin >> n;
		
		switch (n){
			case 1:{
				cout << "Enter a:";
				cin >> a;
				cout << "Enter b:";
				cin >> b;
				ans = sum(a,b);
				cout << endl << " ADDITION : " << ans << endl;
				break;
			}
			case 2:{
				cout << "Enter a:";
				cin >> a;
				cout << "Enter b:";
				cin >> b;
				ans = sub(a,b);
				cout << endl << " Subtraction : " << ans << endl;
				break;
			}
			case 3:{
				cout << "Enter a:";
				cin >> a;
				cout << "Enter b:";
				cin >> b;
				ans = mul(a,b);
				cout << endl << " Multiplication : " << ans << endl;
				break;
			}
			case 4:{
				cout << "Enter a:";
				cin >> a;
				cout << "Enter b:";
				cin >> b;
				ans = div(a,b);
				cout << endl << " Division : " << ans << endl;
				break;
			}
			case 5:{
				cout << "Enter a:";
				cin >> a;
				cout << "Enter b:";
				cin >> b;
				ans = mod(a,b);
				cout << endl << " Moduls : " << ans << endl;
				break;
			}
			case 6:{
				cout << "you Exit :";
				break;
			}
		}
		n++;
	}while(n!=6);
}
