#include<iostream>
using namespace std;

class G{
	int a;
	string name;
	public :
		G(){
			cout <<endl << "Gautam:";
			
		}
		void G1(int a){
			cout <<endl << "a:"<<a<<endl;
		}
		void G1(int a, int b){
			cout <<endl << "a+"<< "b="<< a+b << endl;
		} 
		void G1(int a,int b,int c){
			cout <<endl << "a+"<< "b+" << "c="<< a+b+c << endl;
		}
		
	
};

int main () {
	string name;
	int a,b,c;
			cout << "Enter A:";
			cin >> a;
			cout << "Enter B:";
			cin >> b;
			cout << "Enter C:";
			cin >> c;
	G g;
	g.G1(a);
	g.G1(a,b);
	g.G1(a,b,c);
}
