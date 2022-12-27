#include<iostream>
using namespace std;

class Gautam {
	
	private :
		
		string bankname;
		int Password;
		
	public :
	
		Gautam(string bankname, int Password) {
			
			this->bankname = bankname;
			this->Password = Password;
		}		
		
		void getData() {
			
			cout << "\t |Bank Name \t: " << bankname << "\t   |" << endl
				 << "\t |PASSWORD \t: " << Password << "   |" << endl;
		}
};

int main() {
	
	Gautam g("BOB", 606060);
	Gautam g1("SBI",202020);
	Gautam g2("ICICI",454565);
	Gautam g3 = g;
	
	g.getData();
	g1.getData();
	g2.getData();
	g3.getData();
	
}
