#include<iostream>
using namespace std;

class Maths {
	int a;
	int b;
	public:
		Maths () {
			cout << "Enter the values:"<< endl << endl;
		}
		void setData()
		{
			cout << "Enter A:";
			cin >> a;
			cout << "Enter B:";
			cin >> b;
		}
		void getDiv()
		{
			if(b == 0)
			{
				throw b;
			}
			else
			{
				cout << endl << "Division : " << a << "/" << b << " = " << a/b << endl;
			}
		}
		void Ans()
		{
			try{
				getDiv();
			}
			catch(int b){
				
				cout  << endl << "Not Divided by ZERO :" << endl;
			}
			catch(...){
				
				cout << endl  << "Please Divied only with Positive(1,2,3........N) number :" << endl;
			}	
		}
};
int main()
{
	Maths G;
	G.setData();
	G.Ans();
}
