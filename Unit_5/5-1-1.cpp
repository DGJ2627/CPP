#include<iostream>
using namespace std;

class Student {
	
	private :
		
		int id,age;
		string name,course,email,city,collage;
		
	public :	
	    void Setdata(int i, int n){
	    	system ("cls");
	    	cout << "Students :" << i << "/"<< n <<endl<<endl ;
	    	cout << "Enter ID:";
	    	cin >> id;
	    	cout << "Enter Name:";
	    	cin >> name;
	    	cout << "Enter Collage:";
	    	cin >> collage;
	    	cout << "Enter Course:";
	    	cin >> course;
	    	cout << "Enter Email:";
	    	cin >> email;
	    	cout << "Enter City:";
	    	cin >> city;
	    
		}
		
		static void header (){
       			cout << endl << endl
				   <<"\Id\t:Name:\t\tAge:\t\tCourse:\t\tEmail:\t\tCity:\t\tCollege:\n.......\t..........\t\t.......\t\t............\t\t..........\t\t.........\t\t..........." << endl << endl;
		}
		
		void Getdata(){
			cout  << id << name  
			      << age << course 
				   << email << city 
				  << collage << endl;
		} 
};

int main(){
	int n,i;
	cout << "Enter Total Students:";
	cin >> n;
	
	Student G[n];
	
	for (i=0;i<n;i++){
		G[i].Setdata(i+1,n);
	}
	
	Student :: header();
	
	for (i=0;i<n;i++){
		G[i].Getdata();
	}
}
