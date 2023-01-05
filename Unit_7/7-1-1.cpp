#include<iostream>
using namespace std;
class Admin{
	protected :
		string CompanyName;
		long long int managerSalary;
		int employeeSalary;
		int totalStaff;
		long long int totalAnnualRevenue;
		string canTerminate;
		Admin()
		{
			CompanyName = "G&J";
			managerSalary = 500000;
			employeeSalary = 70000;
			totalStaff = 500;
			totalAnnualRevenue = 875641230;
			canTerminate = "Manager&Empolyee";
		}
		void MyAccess()
		{
			cout << "Admin Can Access This..." << endl;
			cout << "===========================================" << endl;
			cout << "Company Name    		: " << CompanyName << endl;
			cout << "Manager Salary  		: " << managerSalary << endl;
			cout << "Employee Salary 		: " << employeeSalary << endl;
			cout << "Total Staff     		: " << totalStaff << endl;
			cout << "Total Annual Revenue : " << totalAnnualRevenue << endl;
			cout << "You Can Terminate 	: " << canTerminate << endl;
		}
};
class Manager : protected Admin{
	protected :
		void MyAccess()
		{
			Admin::MyAccess();
			string canterminate = "Empolyee";
			cout << endl << endl << "Manager Can Access This..." << endl;
			cout << "===========================================" << endl;
			cout << "Company Name    		: " << CompanyName << endl;
			cout << "Manager Salary  		: " << managerSalary << endl;
			cout << "Employee Salary 		: " << employeeSalary << endl;
			cout << "Total Staff     		: " << totalStaff << endl;
			cout << "You Can Terminate 	: " << canTerminate << endl;
		}
};
class Emp : private Manager{
	public :
		void MyAccess()
		{
			Manager::MyAccess();
			cout << endl << endl << "Empolyee Can Access This..." << endl;
			cout << "===========================================" << endl;
			cout << "Company Name    		: " << CompanyName << endl;
			cout << "Employee Salary 		: " << employeeSalary << endl;
		}
};
int main()
{
	Emp G1;
	G1.MyAccess();
}
