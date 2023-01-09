#include<iostream>
using namespace std;

class Maths {
	
	int a;
	
	public : 
	void setdata(){
		
		cout << "Enter A : ";
		cin  >> a;
	}
	
	Maths operator+(Maths G2){
		
		Maths demo;
		
		demo.a = this->a + G2.a;
		
		cout << endl << "Addition : " << demo.a << endl;
	}
};

int main(){
	
	Maths G1,G2,G3;
	G1.setdata();
	G2.setdata();
	G3 = G1 + G2;
	
}
