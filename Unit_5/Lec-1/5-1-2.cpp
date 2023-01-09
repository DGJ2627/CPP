#include<iostream>
using namespace std;

class P {
	
	protected :
		
		float temp;
	
	public :
		
		void cel() {
			cout << "Enter Celcius :";
			cin  >> temp;
		}
		
		
};

class Q : public P {
	
	 protected :
	 	
	 	float fah;
	 	
	public :
		
		void fehr() {
			
			fah = (temp * 9 / 5) + 32;
			cout << endl << "Answer :- Fahrenheit : " << fah<< endl;
		}
};

class R : public Q {
	
	 protected :
	 	
	 	float kel;
	 	
	public :
		
		void kl() {
			
			kel = 273.5 + ((fah - 32.0) * (5.0/9.0));
			
			cout << endl << "Answer :- Kelvin : " << kel << endl;
		}
};

int main() {
	
	R G;
	
	G.cel();
	G.fehr();
	G.kl();
	
}
