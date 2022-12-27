#include<iostream>
using namespace std;

class RBI {
	
	protected :
		
		int rate;
	
	public :
		
		void setRBI() {
			
			cout << "WELCOME TO RESERVE BANK OF INDIA" << endl << endl;
			
			cout << "Enter The Bank Rate(%) : ";
			cin  >> rate;
		}
};

class SBI : public RBI {
	
	private :
		
		int investAmount;
		int roi;
		
	public :
		
		void setSBI() {
			
			cout << endl << "WELCOM TO STATE BANK OF INDIA " << endl << endl;
			
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
		}
		
		void getSBI() {
			
			roi = investAmount * rate / 100;
			
			cout << endl << endl << "STATE BANK OF INDIA" << endl; 
			cout << endl << "Return on investment of STATE BANK OF INDIA : " << roi << endl;
		}
};


class BOB : public RBI {
	
	private :
		
		int investAmount;
		int roi;
		
	public :
		
		void setBOB() {
			
			cout << endl << "WELCOM TO BANK OD BARODA " << endl << endl;
			
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
		}
		
		void getBOB() {
			
			roi = investAmount * rate / 100;
			
			cout << endl << endl << "BANK OF BARODA" << endl; 
			cout << endl << "Return on investment of Bank Of Baroda : " << roi << endl;
		}
};

class ICICI : public RBI {
	
	private :
		
		int investAmount;
		int roi;
		
	public :
		
		void setICICI() {
			
			cout << endl << endl << "WELCOM TO  INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA " << endl << endl;
			
			cout << "Enter The Your Bank Invest Amount : ";
			cin  >> investAmount;
		}
		
		void getICICI() {
			
		roi = investAmount * rate / 100;
			
			cout << endl << endl << "INDUSTRIAL  CREDIT INVESTMENT CORPORATION OF INDIA " << endl; 
			cout << endl << "Return on investment of INDUSTRIAL CREDIT INVESTMENT CORPORATION  OF INDIA : " << roi << endl;
		}
};

int main() {
	
	SBI s;
	BOB b;
	ICICI i;
	 
	s.setRBI();
	s.setSBI();
	s.getSBI();
	
	b.setRBI();
	b.setBOB();
	b.getBOB();
	
	i.setRBI();
	i.setICICI();
	i.getICICI();

	
}
