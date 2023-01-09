#include<iostream>
using namespace std;

class Data {
	private :
		
		string name;
		
		public :
			
			Data (string name){
				
				this->name = name;
				
			}
			
			void print(){
				
				cout << "Enter your name : ";
				cin  >> name;
			}
			
			void print(string surname){
				
				cout << "Enter your surname : ";
				cin  >> surname;
				cout << "==============================="<<endl;
				cout << "Your full name : " << name << " " << surname << endl;
			}
		
};

int main(){
	string name,surname;
	Data g1(name);
	g1.print();
	g1.print(surname);
}
