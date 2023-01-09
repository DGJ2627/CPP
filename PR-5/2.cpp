/*  WAP with a mother class and an inherited daugther class.Both of them should have a method 
	void display ()that prints a message (different for mother and daugther). 
	In the main define a daughter and call the display() method on it.  */
	
#include<iostream>
using namespace std;

class Mother {
	
	public :
		
		void display() {
			
			cout << "MOTHER : Why you not going today scholl ? " << endl << endl;
		}
};

class Daugther : public Mother {
	
	public :
		
		void display() {
			
			Mother :: display();
			cout << "DAUGTHER :Today i don't like good feel so that i am not going school" << endl << endl;
		}
};

int main() {
	
	Daugther d1;
	
	d1.display();
}
