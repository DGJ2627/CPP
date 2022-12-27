#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int id;
		string name;
		int age;
		string course;
		string city;
		string college;
		
		
	public :
		
		void setData(){
			
			cout << endl << "\t------ Input Studentss Data -------" << endl << endl;
			cout << "\tEnter The Student Id :";
			cin  >> id;
			cout << "\tEnter The Student Name :";
			cin  >> name;
			cout << "\tEnter The Student Age :";
			cin  >> age;
			cout << "\tEnter The Student Course :";
			cin  >> course;
			cout << "\tEnter The Student City :";
			cin  >> city;
			cout << "\tEnter The Student College Name :";
			cin  >> college;
			
        }
        
        void table() {
        	
        	cout << endl << endl << "\t\tId\t\tName\t\tAge\t\tCourse\t\t\tCity\t\tCollege\n\t\t.......\t\t..........\t.......\t\t............\t\t.........\t..........." << endl << endl; 
		}
		
		void getData(){
			
		
			cout  << "\t\t"<< id << "\t\t"<< name<< "\t\t " << age << "\t\t " << course << "\t\t" << city << "\t\t" << college << endl;
		}
};




int main() {
    int n;
	
	cout << "Entre The Number Of Student :";
	cin  >> n;
	
	Student g[n];
	
	for(int i=0; i<n; i++)  {
		g[i].setData();
	}
	
	g[0].table();
	
	for(int i=0; i<n; i++)  {
		g[i].getData();
	}
}
