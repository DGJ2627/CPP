#include<iostream>
using namespace std;

class htl {
		private :
		int id;
		string name;
		string type;
		int staff_size; 
		int room_size;
		int establish_year;
		string address;
		string rating_type;
		string website;
		
	public :
		
		void SetData(int id,string name,string type,int staff_size,int room_size,int establish_year,string address,string  rating_type,string website) {
			
			this->id = id;
			this->name = name;
			this->type = type;
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->establish_year = establish_year;
			this->address = address;
			this->rating_type = rating_type;
			this->website = website;
		}
		
		void GetData() {
			
			cout << endl << endl ;
			
			cout << "HOTEL ID : " << id << endl
				<< "HOTEL NAME : " << name << endl
				<< "HOTEL TYPE : " << type << endl
				<< "HOTEL STAFF SIZE : " << staff_size << endl
				<< "HOTEL ROOM SIZE : " << room_size << endl
				<< "HOTEL ESTABLISH YEAR : " << establish_year << endl
				<< "HOTEL ADDRESS : " << address << endl
				<< "HOTEL RATING TYPE : " << rating_type << endl
				<< "HOTEL WEBSITE : " << website << endl;
		}

};

int main(){
		
	htl g1;
    	
    g1.SetData(369,"Gautam","Hotel",39,45,2023,"surat","7star","G_Hotelgroup.com");
    g1.GetData();

}
