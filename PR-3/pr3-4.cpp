#include<iostream>
using namespace std;
class House {
	
	private :
		
		int hno,rno;
		string hsize, rsize,hcolour,rcolour;
		
	public :
		
		void setdata() {
			
			cout << "Enter The House Number :";
			cin  >> hno;
			cout << "Enter The House Size :";
			cin  >> hsize;
			cout << "Enter The House colour :";
			cin  >> hcolour;
			cout << "Enter The Room Number :";
			cin  >> rno;
			cout << "Enter The Room Size :";
			cin  >> rsize;
			cout << "Enter The Room colour :";
			cin  >> rcolour;
	
		}
		
		void getdata() {
			
			cout << "House Number:" << hno << endl<<endl 
			    << "House Size:"<<hsize<<endl<<endl
			    <<"House Colour:"<<hcolour<<endl<<endl
			    << "Room Number:" << rno << endl<<endl
			    << "Room Size:"<<rsize<<endl<<endl
			    <<"Room Colour:"<<rcolour<<endl<<endl;
	
		}
};

int main() {
	
	House g3;
	g3.setdata();
	g3.getdata();
}

