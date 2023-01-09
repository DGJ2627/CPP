#include<iostream>
using namespace std;

class A{
	int a;
	public :
		A(){
			cout << "Enter the Elements :" << endl << endl;
		}	
		virtual void setdataA(){
			cout << "Enter A:";
			cin >> a;
		}
		
		virtual void getdataA(){
			cout << endl << "A:" << a << endl;
		}
};

class B : virtual public A{
	int b;
	public :
		
		virtual void setdataB(){
			cout << "Enter B:";
			cin >> b;
		}
		
		virtual void getdataB(){
			cout << "B:" << b << endl;
		}
};

class C : virtual public A{
	int c;
	public :\
	
		virtual void setdataC(){
			cout << "Enter C:";
			cin >> c;
		}
		
		virtual void getdataC(){
			cout << "C:" << c << endl;
		}
};

class D : public B, public C{
	int d;
	public :
		
		virtual void setdataD(){
			cout << "Enter D:";
			cin >> d;
		}
		
		virtual void getdataD(){
			cout << "D:" << d << endl;
		}
		
		~D(){
			cout << endl << "End : ";
		}
};

int main()
{
	D g1;
	g1.setdataA();
	g1.setdataB();
	g1.setdataC();
	g1.setdataD();
	
	g1.getdataA();
	g1.getdataB();
	g1.getdataC();
	g1.getdataD();
}
