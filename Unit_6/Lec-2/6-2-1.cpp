#include<iostream>
using namespace std;

class N {
	
	int a;
	
	public :
		
		void setdata(){
			
			cout << "Enter A : ";
			cin  >> a;
		}
		
		N operator< (N g2){
			N tmp;
			
			if (a<g2.a){
				tmp.a = g2.a;
					cout << " The higher number : " << tmp.a << endl;
				return tmp;
			}
			
			else if (a>g2.a) {
				tmp.a = a;
				cout << " The higher number : " << tmp.a << endl;
				return tmp;
			} 
			
			else if (a==g2.a){
				tmp.a = a = g2.a;
				cout << " Both are same : " << tmp.a << endl;
				return tmp;
			}
			
		}
};

int main (){
	N g1,g2,g3;
	g1.setdata();
	g2.setdata();
	g3 = g1<g2;

	
}
