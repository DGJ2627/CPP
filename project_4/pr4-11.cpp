#include<iostream>
using namespace std;

 
 class demo  {

	private : 
	
	int id;
	string name;
	static string instname;
	
	public : 
	
	void Setdata(){
		
		cout << "Enter your id :";
		cin  >> id;
		cout << " Enter your Name :";
		cin  >> name;
	}
	void Getdata()
		{
			cout << "Id : " << id << endl
			     << "your name :" << name << endl
			     << "Institute name : " << instname << endl;
		}
		

		
 };
 string demo :: instname = "Red & White institute";
 
 int main(){
 	
 	demo g;
 	g.Setdata();
 	g.Getdata();
 }
