#include <iostream>

using namespace std;

class Garage{
	public:
	
		  Garage() {
		    try {
		    	
		    } catch (string e) {
		      throw e ;
		    }
		  }
 
};

class Motor : public Garage{
	
	string gautam = "Your car's break is Damage  :";
			
		public:
			  Motor() {
			  	
			    throw  gautam ;
			    
				Garage();
			  }
};


int main() {
	
  try{
  	
  	Motor a;
  	
  } 
  catch (string e) {
    
	cout << "Your Error is Detected : " << endl << endl << e << endl;
 
  }

}

