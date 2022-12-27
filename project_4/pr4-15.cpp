#include<iostream>
using namespace std;

class Taksh;

class Gaurav {
	
	private :
		int a;
		
	public :
		
		void setData() {
			
			cout << "\t\tEnter The A : ";
			cin  >> a;
		}
		
		friend void Gautam(Gaurav , Taksh);
};


class Taksh {
	
	private :
		int b;
		
	public :
		
		void setData() {
			
			cout << "\t\tEnter The B : ";
			cin  >> b;
		}
		
		friend void Gautam(Gaurav , Taksh);
};

void Gautam (Gaurav g, Taksh t) {
	
	cout << endl << "\t\t------ ADDISION A OF B ------" << endl;
	cout << "\t\t A + B : " << g.a + t.b << endl;
}

int main() {
	
	Gaurav g1;
	Taksh   t1;
	
	
	g1.setData();
	t1.setData();
	
	Gautam(g1,t1);
}

