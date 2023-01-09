#include<iostream>
using namespace std;

class Dist {
	int f,i;
	public :
		void setdata(){
		
		cout << "Enter Feet : ";
		cin  >> f;
		cout << "Enter Inch : ";
		cin  >> i;
	}
	
	Dist operator+(Dist f2){
		
		Dist demo;
		demo.f = f + f2.f;
		demo.i = i + f2.i;
		demo.f = demo.f + (demo.i/12);
		demo.i = demo.i%12;
		
		
		cout <<"Feet : " << demo.f << endl;
		cout <<"Inch : " << demo.i << endl;
	}
};

int main(){
	
	Dist G1,G2,G3;
	G1.setdata();
	G2.setdata();
	G3 = G1 + G2;
	
}
