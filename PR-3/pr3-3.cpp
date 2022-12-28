#include<iostream>
using namespace std;

class Time {
	
	private :
		
		int h, m, s;
		
	public :
		
		void setdata() {
			
			cout << "Enter The Second :";
			cin  >> s;
		}
		
		void petdata() {
			
			if(s>=3600) {
				
				h = s / 3600;
			}
			
			
			
			if(s % 3600 == 0) {
				
				m = 0;
				s = 0;
			}
			
			
			if(s>=60) {
				
				m = s / 60;
			}
			
			s %= 60;
			cout << "second:"<<"miniutes:"<<"Hours:"<<endl<<endl;
			cout  << s << " : " << m << " : " << h << endl;
		}
};

int main() {
	
	Time g2;

    g2.setdata();
    g2.petdata();
	
}


