#include<iostream>
using namespace std;

class A {
	
	protected :
		
		int a;
		
	public :
		
		void setA() {
			
			cout << "Enter The A : ";
			cin  >> a;
		}
};

class B : public A {
	
	protected :
		
		int b;
		
	public :
		
		void setB() {
			
			cout << "Enter The B : ";
			cin  >> b;
		}
};

class C : public A {
	
	protected :
		
		int c;
		
	public :
		
		void setC() {
			
			cout << "Enter The C : ";
			cin  >> c;
		}
};

class D : public B , public C {
	
	protected :
		
		int d;
		
	public :
		
		void setD() {
			
			cout << "Enter The D : ";
			cin  >> d;
		}
   
		
		void get() {
			
		cout << endl << endl << "SUM : " << B::a + b + c + d << endl << endl;
			
	    }
};


int main() {
	
	D d1;
	
	d1.B::setA();
	d1.setB();
	d1.setC();
	d1.setD();
	d1.get();
}

