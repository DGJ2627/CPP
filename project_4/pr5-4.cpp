#include<iostream>
using namespace std;

class S_S{
	private :
	
		int id;
		string stu_name;
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		long long int stu_contact;
		static string stu_edu_institute_name;
		string stu_address;
		
	public :
		
		void SetDataS() {
			
			cout << endl << endl << "\t\t\t--- SCHOOL STUDENT DATA ---" << endl;
			cout <<"-------------------------------------------------------------------------- " << endl << endl;
			
			cout << "\tEnter The Student Id : ";
			cin  >> id;
			cout << "\tEnter The Student Name : ";
			cin  >> stu_name;
			cout << "\tEnter The Student Roll No : ";
			cin  >> stu_roll_no;
			cout << "\tEnter The Student Standard : ";
			cin  >> stu_standard;
			cout << "\tEnter The Student Age : ";
			cin  >> stu_age;
			cout << "\tEnter The Student Contact No : ";
			cin  >> stu_contact;
			cout << "\tEnter The Student Address : ";
			cin  >> stu_address;
			
		}
		
		void GetDataS() {
			
			cout << endl << endl << "\t\t\t---DISPLAY STUDENT DATA ---  " << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
			cout << "\t\t STUDENT ID : " << id << endl
				 << "\t\t STUDENT NAME : " << stu_name<< endl
				 << "\t\t STUDENT ROLL NO : " << stu_roll_no << endl
				 << "\t\t STUDENT STANDARD : " << stu_standard << endl
				 << "\t\t STUDENT AGE : " << stu_age << endl
				 << "\t\t STUDENT CONTACT NO : " << stu_contact << endl
			     << "\t\t STUDENT EDUCTION INSTITUTE NAME : " << stu_edu_institute_name << endl
				 << "\t\t STUDENT ADDRESS : " << stu_address << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
		}
	
};

class C_S{
	private :
	
		int id;
		string stu_name;
		int stu_roll_no;
		string stu_standard;
		int stu_age;
		long long int stu_contact;
		static string stu_edu_institute_name;
		string stu_address;
		
	public :
		
		void SetDataC() {
			
			cout << endl << endl << "\t\t\t--- COLLEGE STUDENT DATA ---" << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
			
			cout << "Enter The Student Id : ";
			cin  >> id;
			cout << "Enter The Student Name : ";
			cin  >> stu_name;
			cout << "Enter The Student Roll No : ";
			cin  >> stu_roll_no;
			cout << "Enter The Student Standard : ";
			cin  >> stu_standard;
			cout << "Enter The Student Age : ";
			cin  >> stu_age;
			cout << "Enter The Student Contact No : ";
			cin  >> stu_contact;
			cout << "Enter The Student Address : ";
			cin  >> stu_address;
			
		}
		
		void GetDataC() {
			
			cout << endl << endl << "\t\t\t---DISPLAY COLLEGE DATA ---  " << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
			cout << "\t\t\t\t STUDENT ID : " << id << endl
				 << "\t\t\t\t STUDENT NAME : " << stu_name << endl
				 << "\t\t\t\t STUDENT ROLL NO : " << stu_roll_no << endl
				 << "\t\t\t\t STUDENT STANDARD : " << stu_standard << endl
				 << "\t\t\t\t STUDENT AGE : " << stu_age << endl
				 << "\t\t\t\t STUDENT CONTACT NO : " << stu_contact << endl
				 << "\t\t\t\t STUDENT EDUCTION INSTITUTE NAME : " << stu_edu_institute_name << endl
				 << "\t\t\t\t STUDENT ADDRESS : " << stu_address << endl;
			cout << "-------------------------------------------------------------------------- " << endl << endl;
		}
};

string S_S :: stu_edu_institute_name = "S.U.H.S School";
string C_S :: stu_edu_institute_name = "BMU University";


int main(){
	S_S g1;
	C_S g2;
	
	g1.SetDataS();
	g1.GetDataS();
	
	g2.SetDataC();
	g2.GetDataC();
	
}
