 #include<iostream>
using namespace std;

class cricket
{
	public :
		void score(int over)
		{
			if(over != 20 && over != 90)
			{
				cout<< "Welcome to Gally cricket tournament..." << endl << endl;
				cout << "Over : " << over << endl; 
			}
		}
};

class T20 : public cricket
{
	public :
		void score(int over)
		{
			if(over == 20)
			{
				cout << "Welcome to T20 Match Cricket tournament..." << endl << endl;
				cout << "Over : 20"  << endl; 
			}
		}
};

class Test : public cricket
{
	public :
		void score(int over)
		{
			if(over == 90)
			{
				cout<< "Welcome to Test Match Cricket tournament..." << endl << endl;
				cout << "Over : 90"  << endl; 
			}
		}
};

int main()
{
	int over;
	
	cout << "Enter the over : ";
	cin >> over;
		
	cricket c;
	T20 t;
	Test T;
	
	t.score(over);
	T.score(over);
	T.cricket::score(over);
}
