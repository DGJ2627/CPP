#include<iostream>
using namespace std;

class I{
	private :
		
		string states;
		string district;
		string capitalCity;
		static string country;
	
	public :
		
		void SetData() {
			
			cout << endl << endl << "\t\t\t ----- INPUT COUNTRY DATA -----" << endl;
			cout << "-------------------------------------------------------------" << endl ;
			cout << "Enter The States : ";
			cin  >> states;
			cout << "Enter The District : ";
			cin  >> district;
			cout << "Enter The Capital City : ";
			cin  >> capitalCity;
		}
		
		static void inView() {
			
			cout << "-------------------------------------------------------------------------------------------" << endl;
			cout << endl << endl << "\t STATES \t DISTRICT \t CAPITAL CITY \t COUNTRY \n \t ------- \t ------- \t ------- \t ------- \n";
		}
		
		void GetData() {
			
			cout << "\t " << states << "\t\t" << district << "\t\t" << capitalCity << "\t\t " << country << "\n";
		}
};
string I :: country = "India";

int main (){
	int i,n;
	
	cout << "Enter The Country Data : ";
	cin  >> n;
	
	I g[n];
	
	for(i=0; i<n; i++)
	{
		g[i].SetData();
	}
	
	I :: inView();
	
	for(i=0; i<n; i++) 	
	{
		g[i].GetData();
	}	
}
