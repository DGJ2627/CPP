#include<iostream>
using namespace std;

class Math{
	
	int a,tmp;
	
	public:
		
		void setdata(){
			
			cout << "Enter a : ";
			cin  >> a;
			tmp = a;
		}
		
		void getdata(){
			
			cout <<"A : " << a << endl;
		}
		
		Math operator++(){
			
			Math tmp1;
			cout << endl << "Increment :"<< endl;
			tmp1.a = ++a;
		}
			Math operator--(){
			
			Math tmp2;
			cout << endl << "Decrement :"<< endl ;
			tmp2.tmp = --tmp;
	}
};

int main(){
	Math G1,G2,G3;
	G1.setdata();
	G1.getdata();
	G2 = ++G1;
	G2.getdata();
	G3 = --G1;
	G3.getdata();
}
