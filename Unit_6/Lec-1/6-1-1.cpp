#include<iostream>
using namespace std;

class X {
	protected :
		int a,b,c,A,B,C,sum;
	public :
		void SetdataX (){
			cout << "Enter A:";
			cin >> a;
			cout << "Enter B:";
			cin >> b;
			cout << "Enter C:";
			cin >> c;
		    
		};
		void GetdataX (){
			
			A = a*a*a;
			B = b*b*b;
			C = c*c*c;
			
			cout << "A : " << A << endl
	   	         << "B : " << B << endl
	   	         << "C : " << C << endl;
	   	         
	   	    sum = A+B+C;
			   
			cout <<"Total of all values:"<<sum;     
		}
		
};

class Y : public X {
	
};

int main(){
		
	Y y1;
	y1.SetdataX();
	y1.GetdataX();

}
