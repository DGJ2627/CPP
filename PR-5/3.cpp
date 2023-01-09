#include<iostream>
using namespace std;

class Animal {
	
	protected :
		string name;
		double age;
		
	public : 
	
			void setani() {
			
			cout << "Enter The Animal Name : ";
			cin  >> name;
			cout << endl <<"Enter The Animal Age : ";
			cin  >> age;
			
		}
};

class Zebra : public Animal{
	
	protected :
		string found;
		string colour;
		
		public : 
	
			void setZ() {
			
			cout << endl << "Where can Zebra ne found ? : ";
			cin  >> found;
			cout << endl <<"Tell me a zebra colour : ";
			cin  >> colour;
			
		}
			void getZ() {
				
				cout << "==========================================="<<endl
				     << " The Animal Name : " << name << endl
				     << " Zebra age       : " << age << endl
				     << " Zebra Eating    : " << found << endl
				     << " Zebra colour    : " << colour << endl
				     << "==========================================="<<endl;
			}
		
		
};

class Dolphin : public Animal{
	
	protected :
		string found;
		string colour;
		
		public : 
	
			void setD() {
			
			cout << endl << "Where can dolphin be found ? : ";
			cin  >> found;
			cout << endl <<"Tell me a dolphine colour : ";
			cin  >> colour;
			
		}
			void getD() {
				
				cout << "==========================================="<<endl
				     << " The Animal Name : " << name << endl
				     << " Dolphin age     : " << age << endl
				     << " Dolphin Eating  : " << found << endl
				     << " Dolphin colour  : " << colour << endl
				     << "==========================================="<<endl;
			}
		
		
		
};

int main(){
	Zebra z;
	Dolphin d;
	z.setani();
	z.setZ();
	d.setani();
	d.setD();
	z.getZ();
	d.getD();
}
