#include<iostream>
using namespace std;

class Time {
	
	private :
            s,m,h,s1,s2,m1,m2,h1,h2;
            
    public :
	
	
	void setdata(){
	cout << "Enter the S1:";
	cin >> s1;
	cout << "Enter the S2:";
	cin >> s2;
	cout << "Enter the H1:";
	cin >> h1;
	cout << "Enter the H2:";
	cin >> h2;
	cout << "Enter the M1:";
	cin >> m1;
	cout << "Enter the M2:";
	cin >> m2;
}
    void getdata (){
    	
    	s=s1+s2;
    	m=m1+m2;
    	h=h1+h2;
    	
    	while (s>60){
    		s=s-60; 
		}
		while (m>60){
			m=m-1;
		}
		
		cout <<"Second:"<<s<<"Miniutes:"<<m<<"Hours:"<<h<<endl;
	}
	
	
}


int main(){
	Time g1;
	g1.setdata();
	g1.getdata();
}

