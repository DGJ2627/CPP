#include<iostream>
using namespace std;

class Data {	 
    int a,b,i;
	int age;
	int c=0;
	string email;
     string pass;
     string Div = "A Can Not Devided By ZERO";
     string Vo = "You Can Not Vote";
     string Pd = "Password was not match";
	public :
		
		void setData() {
            cout << "Enter The A : ";
            cin  >> a;
            cout << "Enter The B : ";
            cin  >> b;
     	}
	void getData(){
		try {
            if(b==0) {
               	throw Div;
            	}
            else {
              		cout << endl << "Answer : " << a/b << endl;
            	}
		}
		  catch(string Div) {
			cout << endl << Div << endl;
			}
     }
          
        void setVoter() {
            cout << endl;
            cout << "Enter The Age : ";
            cin  >> age;
	   }
	   void getVoter() {
	   	try {
            if(age<18) {
               throw Vo;
            }
            else  {
               cout << "You Can Vote : " << endl;
            }
		}
		catch(string Vo) {
			cout << endl << Vo << endl;
		}
        }  
        
	   void setPassWord() {

            cout << endl ;
            cout << "Enter Email : ";
            cin  >> email;
            cout << "Enter password : ";
            cin  >> pass;
            
	   }
	   void getPassWord(){
	   	try{
	   		
           for(i=0; i<'/0'; i++) {
                if(pass[i]>=65 && pass[i]<=90) {

                    c++;
                }
           }

           if(c>0)  {
                cout << endl << "Passwod is Correct:" << endl;
           }
           else { 
                throw Pd;
           }
     	}
     	
		 catch(string Pd){ 
		 	cout << endl << Pd << endl ;
		}
		
        }           
};

int main()
{
	Data g;
	g.setData();
	g.getData();
	g.setVoter();
	g.getVoter();
	g.setPassWord();
	g.getPassWord();
}
