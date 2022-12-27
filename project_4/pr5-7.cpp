#include<iostream>
using namespace std;

class G{
		private :
		
		string name;
		int std;
		
	public :
	
		G(string name, int std) {
			
			this->name = name;
			this->std = std;
		}		
		
		void getData() {
			
			cout << "Name \t: " << name  << endl
				 << "Std \t: " << std << endl;
		}
};


int main() {
	
	G g("Gautam", 13);
	
	g.getData();
}
