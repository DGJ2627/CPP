#include<iostream>
using namespace std;

class S1 {
	public :
		
		int rollNo;
		string name;
		int standard;
		int age;
		int contactNo;
		string address;

		
		void setData() {
			
			
			cout << "Enter The Student Roll No : ";
			cin  >> rollNo;
			cout << "Enter The Student Name : ";
			cin  >> name;
			cout << "Enter The Student Standard : ";
			cin  >> standard;
			cout << "Enter The Student Age : ";
			cin  >> age;
			cout << "Enter The Student Contact No : ";
			cin  >> contactNo;
			cout << "Enter The Student Address : ";
			cin  >> address;
		}
		 
		 
		
};

class S2 {
	
	public :
		
		
		void getData() {
			
			S1 g1;
			g1.setData();
			cout << endl<<endl;
			cout << " STIUDENT ROLL NO \t: "<< g1.rollNo  << endl
				 << " STIUDENT NAME \t\t: " << g1.name <<endl
				 << " STIUDENT STANDARD \t: "  << endl
				 << " STIUDENT AGE \t\t: " << g1.age << endl
				 << " STIUDENT CONTACT NO \t: " << g1.contactNo  << endl
				 << " STIUDENT ADDRESS \t: " << g1.address  << endl;
		}
		
};

int main(){
	S2 g2;
	g2.getData();
}
