#include<iostream>
using namespace std;

class Area{
	protected:
		int r;
		int l;
		int b,h;
		double pi = 3.14;
		double cir,tri,rec;
	public:
		virtual void calculate(int a, int b,int c ,int d) = 0;
		
		double circle()
		{
			cir = pi * r * r;
			cout << "Area Of Circle : " << cir << endl;
		}
		double triangle()
		{
			tri = (b*h)/2;
			cout << "Area Of Triangle : " << tri << endl;
		}
		double rectengle()
		{
			rec = l*b;
			cout << "Area Of Rectangle : " << rec << endl;
		}
};

class ans : protected Area{
	public:
		int a;
		void Calculate(int a, int g, int f, int j)
		{	
			cout << "Enter 1 : Area Of Circle" << endl
				  << "Enter 2 : Area Of Triangle" << endl
				  << "Enter 3 : Area Of Rectengle" << endl;
				 cin >> a;
			
			switch (a)
			{
				case 1 :
					{
						cout << endl << endl << endl << endl;
						cout << "Enter Radius : ";
						cin >> r;
						cout << endl << endl << endl;
						circle();
						break;
					}
				case 2 :
					{
						cout << endl << endl << endl << endl;
						cout << "Enter Base : ";
						cin >> b;
						cout << "Enter Height : ";
						cin >> h;
						cout << endl << endl << endl;
						triangle();
						break;
					}
				case 3 :
					{
						cout << endl << endl  << endl;
						cout << "Enter Base : ";
						cin >> b;
						cout << "Enter Length : ";
						cin >> l;
						cout << endl << endl << endl;
						rectengle();
						break;
					}
			}
				  
		}
};

int main()
{
	ans g1;
	g1.Calculate(1,9,5,3);
}
