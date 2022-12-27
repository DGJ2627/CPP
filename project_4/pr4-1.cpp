#include<iostream>
using namespace std;

class emp{
	private :
		int id;
		string name;
		string role;
		double salary;
		string exprience;
		string address;
		string email;
		int contactNo;
	public :
		
		void SetData() {
					
			cout << "Enter The Employee Id : ";
			cin  >> id;
			cout << "Enter The Employee Name : ";
			cin  >> name;
			cout << "Enter The Employee Role : ";
			cin  >> role;
			cout << "Enter The Employee Salary : ";
			cin  >> salary;
			cout << "Enter The Employee Exprience : ";
			cin  >> exprience;
			cout << "Enter The Employee Address : ";
			cin  >> address;
			cout << "Enter The Employee Email : ";
			cin  >> email;
			cout << "Enter The Employee Contact No : ";
			cin  >> contactNo; 
		}
		
		void GetData() {
						
			cout << "EMPLOYEE ID : " << id << endl
				<< "EMPLOYEE NAME : " << name << endl
				<< "EMPLOYEE ROLE : " << role << endl
				<< "EMPLOYEE SALARY : " << salary << endl
			     << "EMPLOYEE EXPRIENCE : " << exprience << endl
			     << "EMPLOYEE ADDRESS : " << address << endl
				<< "EMPLOYEE EMAIL : " << email << endl
				<< "EMPLOYEE CONATCT NO : " << contactNo << endl;
		}
};

int main(){
	int n,i;
	cout << "Enter the N:";
	cin >> n;
	emp g1[n];
	
	for(i=0;i<n;i++){
		cout <<"Empolye :"<<i+1<<"/"<<n<<endl<<endl;
		g1[i].SetData();
	}
	for(i=0;i<n;i++){
		g1[i].GetData();
	}	
}
