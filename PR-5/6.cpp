#include<iostream>
using namespace std;
class A {
	
	protected :
		
		int id;
		string name;
		string role;
		int salary;
		string exprience;
		string comp_name;
		string address;
		string email;
		long long int contact;
		
	public :
		
		void setA() {
			
			cout << "Enter your Id : ";
			cin  >> id;
			cout << "Enter your Name : ";
			cin  >> name;
			cout << "Enter your Role :";
			cin  >> role;
		}
};

class B : public A {
		
	public :
		
		void setB() {
			
			cout << "Enter your Salary : ";
			cin  >> salary;
			cout << "Enter your Exprience : ";
			cin  >> exprience;
		}
};

class C : public B {
		
	public :
		
		void setC() {
			
			cout << "Enter your Company Name : ";
			cin  >> comp_name;
			cout << "Enter your Address : ";
			cin  >> address;
		}
		
		void getC() {
			cout << "NAME   : " << name << endl
				 << "ROLE   : " << role << endl
		    	 << "SALARY : " << salary << endl;
		}
};

class D : public C {
	
	public :
		
		void setD() {
			
			cout << "Enter your Email : ";
			cin  >> email;
			cout << "Enter your Contact No. : ";
			cin  >> contact;
		}
		
		void getD() {
			
			cout << " ID           : " << id << endl
				 << " NAME         : " << name << endl
				 << " ROLE         : " << role << endl
				 << " SALARY       : " << salary << endl
				 << " EXPRIENCE    : " << exprience << endl
				 << " COMAPNY NAME : " << comp_name << endl
				 << " ADDRESS      : " << address << endl
				 << " EMAIL        : " << email << endl
				 << " CONTACT NO.  : " << contact << endl;
		}
};

int main() {
	
 	D d1;
 	
 	d1.setA();
 	d1.setB();
 	d1.setC();
 	d1.getC();
 	d1.setD();
 	d1.getD();
 	
}
