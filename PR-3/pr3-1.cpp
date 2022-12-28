#include<iostream>
using namespace std;

class Distance {
	
	private :
		
		int f1, f2;
		int i1, i2, count, f, i;
		
	public :
		
		void getdata() {
			
			cout << "Enter The Feet 1 :";
			cin  >> f1;
			cout << "Enter The Feet 2 :";
			cin  >> f2;
			cout << endl << endl;
			cout << "Enter The Inch 1 :";
			cin  >> i1;
			cout << "Enter The Inch 2 :";
			cin  >> i2;
		}
		
		void putdata() {
			
			f  = f1 + f2;
			i = i1 + i2;	
			
			if(i>=12)
			{
				count = i/12;
				inch  =  i % 12;
				feet+=count;
			}
				
        endl << endl;
			cout <<  "Feet: " << f << endl
				 << "Inch: " << i << endl;
		}
};

int main() {
	
	Distance G;
	G.getdata();
	G.putdata();
}

