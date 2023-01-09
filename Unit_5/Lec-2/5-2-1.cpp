#include<iostream>
using namespace std;

class RBI {
	protected : 
	double rate ;
	public :
		void setRBI (){
			cout << " Welcome to RBI :" << endl;
			cout << " Enter a bank Rate(%) : ";
			cin  >> rate;
			cout << "=============================================" << endl;
		}
};
class SBI : public RBI {
	
	private :
		
		double investAmount;
		double interest;
		
	public :
		
		void setSBI() {
		
			cout << endl << " Welcome to SBI :" << endl;
			cout << "Enter invest Amount : ";
			cin  >> investAmount;
			cout << "=============================================" << endl;
		}
		
		void getSBI() {
			
			interest = investAmount * rate / 100;
			
			cout << endl << "SBI :" << endl; 
			cout << endl << " Your Bank Invest Amount : " << investAmount << " & " << "Rate of Interest : " << rate << endl;
			cout << endl << " Return on investment of STATE BANK OF INDIA : " << interest << endl;
			cout << "=============================================================================" << endl;
		}
};
class BOB : public RBI {
	
	private :
		
		double investAmount;
		double interest;
		
	public :
		
		void setBOB() {
		
			cout << endl << "Welcome to BOB :" << endl << endl;
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
			cout << "=============================================" << endl;
		}
		
		void getBOB() {
			
			interest = investAmount * rate / 100;
			cout << endl << "BOB :" << endl; 
			cout << endl << " Your Bank Invest Amount : " << investAmount << " & " << "Rate of Interest : " << rate << endl;
			cout << endl << " Return on investment of BANK OF BARODA : " << interest << endl;
			cout << "=============================================================================" << endl;
		}
};
class ICICI : public RBI {
	
	private :
		
		double investAmount;
		double interest;
		
	public :
		
		void setICICI() {
			cout << endl << " Welcome to  ICICI " << endl;
			cout << " Enter Your Bank Invest Amount : ";
			cin  >> investAmount;
			cout << "=============================================================================" << endl;
			system("cls");
		}
		
		void outputdataICICI() {
			
		interest = investAmount * rate / 100;
		
			cout << endl << "ICICI : " << endl; 
			cout << endl << " Your Bank Invest Amount : " << investAmount << " & " << "Rate of Interest : " << rate << endl;
			cout << endl << " Return on investment of INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA : " << interest << endl;
			cout << "=====================================================================================" << endl;
		}
};

int main () {
	SBI s;
	BOB b;
	ICICI i;
	
	s.setRBI();
	s.setSBI();
	
	b.setRBI();
	b.setBOB();
	
	i.setRBI();
	i.setICICI();
	
	s.getSBI();
	b.getBOB();
	i.outputdataICICI();
}
