#include<iostream>
#include<string.h>

using namespace std;

class cafe{
	
	private :
		int id;
		char name[100];
		int type [100];
		int re;
		char lo[100];
	    int year;
		int staff;
		
		public :
	
	cafe(int x){
		this -> n = x;
		int i,a;
	
	cout << "Enter count of cafe :"<<endl;
	cin>>a;
	
	for(i=0;i<n;i++){
	    int id;
		char name[100];
		char type [100];
		int re;
		char lo[100];
		int year;
		int staff;
		
		cout << "Enter id of cafe : "<< endl;
		cin >> id;
		cout << "Enter name of cafe : "<< endl;
		cin >> name;
		cout << "Enter type of cafe (like rooftop or normal) : "<< endl;
		cin >> type;
		cout << "Enter caferating (like 1 Star, 2 Start, ..., 5 Star) : "<< endl;
		cin >> re;
		cout << "Enter cafe location (city name): "<< endl;
		cin >> lo;
		cout << "Enter cafe establish year : "<< endl;
		cin >> year;
		cout << "Enter cafe staff count : "<< endl;
		cin >> staff;
}
};

int main(){
	int n;
	cout << "Enter count of cafe :"<<endl;
	cin >> n;
	cafe c(n);

}
