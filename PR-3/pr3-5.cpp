#include<iostream>
using namespace std;
class AC {
	
	private :
		
		int sr,sg;
		string sn;
		
	public :
		
		void setdata() {
			
			cout << "Enter The Student Name:";
			cin >> sn;
			cout << "Enter The Student Roll NO:";
			cin >> sr;
			cout << "Enter The Student GR-ID:";
			cin >> sg;
			}
		
		void getdata() {
			
			cout << "Student Name:"<<sn<<endl
			<< "Student Roll No:"<<sr<<endl
			<< "Student GR-ID:"<<sg<<endl;
				
		}
};

int main() {
	
	AC g4;
	g4.setdata();
	g4.getdata();
}

