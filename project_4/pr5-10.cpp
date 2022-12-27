#include<iostream>
using namespace std;

class name {
	
	private :
		
		string CM;
		string model;
		
	public :
		
		name() {
		
			cout << endl << endl << "\t\t---------------------" << endl;
			cout << "\t\t  WELCOME TO ..." << endl;
			cout << "\t\t---------------------" << endl << endl;
		}
		
		name(name &g) {
			
			CM = g.CM;
			model = "Yseries";
		}
	
		name(string CM, string model) {
			
			this->CM = CM;
			this->model = model;
		}		
		
		void getData() {
			
			cout << endl << endl << "\t |--------------------------------|" << endl;
			cout << "\t |Company Name \t: " << CM << "   |" << endl
				 << "\t |--------------------------------|" << endl
				 << "\t |Model Number \t: " << model<< "\t  |" << endl
				 << "\t |--------------------------------|" << endl << endl; 	
		}
};

int main() {
	
	name g;
	name g1("OPPO", "Xseries");
	name g2("Samung","Zseries");
	name g3(g1);
	
	
	g1.getData();
	g2.getData();
	g3.getData();
	
}
