#include<iostream>
using namespace std;

class G1 {
	
	protected :
		int a;
		int b;
		int c;
		int sum=0;
};

class G2 : public G1{

		public:
			
		void setdata(){
			
			cout << "Enter a :";
			cin  >> a;
			cout << "Enter b :";
			cin  >> b;
			cout << "Enter c :";
			cin  >> c;
			
			sum = (a*a*a) + (b*b*b) + (c*c*c);
		}
		
		void getdata(){
			cout << endl << endl;
			cout << "cube of A : "<< a*a*a << endl;
			cout << "cube of B : "<< b*b*b << endl;
			cout << "cube of C : "<< c*c*c << endl;
			cout << endl << endl << " sum of cube of A,B,C : " << sum << endl;
			
		}
};

int main(){
	G2 g1;
	g1.setdata();
	g1.getdata();
}
