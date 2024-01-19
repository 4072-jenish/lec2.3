#include<iostream>
#include<string.h>

using namespace std;

class daimonds{
	
	private :
		int id;
		char name[100];
		int staff;
		int re;
		int ro;
		int ex;
		char ceo[100];
		
		public :
	
	daimonds(int id,char name,int staff,int re,int ro,int ex,char ceo){
		
		this->id = id;
		this->name[100] = name;
		this->staff = staff;
		this->re = re;
		this->ro = ro;
		this-> ex = ex ;
		this-> ceo[100] = ceo;
		
		cout << "Enter id of company : " << id << endl;
		
		cout << "Enter name of company : " << name << endl;
		
		cout << "Enter staff count  of company : " << staff << endl;
		
		cout << "Enter revenue of company : " << re << endl;
		
		cout << "Enter import raw diamonds  count: "<< ro << endl;
		
		cout << "Enter Exported daoimonds of company : "<< ex << endl;
		
		cout << "Enter name  of ceo : "<< ceo << endl;
		
		
		}
};



int main(){
	int i,a;
	
	cout << "Enter count of comp :"<<endl;
	cin>>a;
	
	for(i=0;i<a;i++){
	    int id;
		char name[100];
		int staff;
		int re;
		int ro;
		int ex;
		char ceo[100];
		
		cout << "Enter id of company : "<< endl;
		cin >> id;
		cout << "Enter name of company : "<< endl;
		cin >> name;
		cout << "Enter staff count  of company : "<< endl;
		cin >> staff;
		cout << "Enter revenue of company : "<< endl;
		cin >> re;
		cout << "Enter import raw diamonds  count: "<< endl;
		cin >> ro;
		cout << "Enter Exported daoimonds of company : "<< endl;
		cin >> ex;
		cout << "Enter name  of ceo : "<< endl;
		cin >> ceo;
		
		daimonds d(id,name[100],staff,re,ro,ex,ceo[100]);
}
		

	return 0;
	
}
