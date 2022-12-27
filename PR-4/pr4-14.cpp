#include<iostream>
using namespace std;

class D_mart {
public:

    void VeriFy() {
        D_mart g;
        string ID = "Gautam";
        int pass = 369963; 

        string id;
        int password;

        cout << "Please Enter Gautam And 369963" << endl << endl;
        cout << "Enter user id : ";
        cin >> id;
        cout << "Enter pasword : ";
        cin >> password;

        if(ID == id && pass == password) {
            cout << "Login Successful";
        }
        else {
            cout << "Enter correct password or user id";
            g.VeriFy();
        }

    }

        int ItemNumber;
        string ItemName;
        int Quantity;
        int Tax;
        int Discount;

    void setData() {



        cout << "Enter Item Number : ";
        cin >> ItemNumber;
        cout << "Enter Item Name : ";
        cin >> ItemName;
        cout << "Enter Item Quantity : ";
        cin >> Quantity;
        cout << "Enter Tax : ";
        cin >> Tax;
        cout << "Enter Discount : ";
        cin >> Discount;

    }
    
    void heading() {

    	cout << endl << "NUMBER" << "\t" << "NAME " << "\t" << "QUANTITY" << "\t" << "TAX" << "\t" << "DISCOUNT" << endl;
        cout << "------" << "\t" << "-----" << "\t" << "--------" << "\t" << "---" << "\t" << "--------" << endl;
	}

    void getData() {

    	cout << ItemNumber << "\t" << ItemName << "\t " << Quantity << "\t" << Tax << "\t" << Discount << endl;
    }

   
};

int main()
{
    D_mart g1[10];
    
    g1[0].VeriFy();

    int n;
    
    cout << "\n\nhow many item want you purchase ? : ";
    cin >> n;

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        g1[i].setData();
    }

    D_mart temp;
    for(int i=0; i<n; i++) {
        for(int j=i+1;j<n;j++) {
            if(g1[i].ItemNumber > g1[j].ItemNumber) {
                temp = g1[i];
                g1[i] = g1[j];
                g1[j] = temp;
            }
        }
    }

    cout <<"----------------------------------------------------------------------------------------------------------------";
    
    g1[0].heading();

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        g1[i].getData();
    }

}
