#include<iostream>
using namespace std;

class P {
	
	protected :
		
		double temperature;
	
	public :
		
		void Setdata() {
			
			cout << "Enter The Temperature :";
			cin  >> temperature;
		}
		
		
};

class Q : public P {
	
	 protected :
	 	
	 	double fahrenheit;
	 	
	public :
		
		void SetFehrenheit() {
			
			fahrenheit = (temperature * 9 / 5) + 32;
			
			cout << endl << endl <<  "Fahrenheit : " << fahrenheit << endl;
		}
};

class R : public Q {
	
	 protected :
	 	
	 	double kelvin;
	 	
	public :
		
		void setKelvin() {
			
			kelvin = 273.5 + ((fahrenheit - 32.0) * (5.0/9.0));
			
			cout << endl << endl << "Kelvin : " << kelvin << endl;
		}
};

int main() {
	
	R r;
	
	r.Setdata();
	r.SetFehrenheit();
	r.setKelvin();
	
}
