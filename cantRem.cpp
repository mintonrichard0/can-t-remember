#include<iostream>
using namespace std;
int notPassWord(){
	string p1="password1";
	string p2="password2";
	string p3="password3";
	system("clear");
	cout << p1 << endl << p2 << endl << p3 << "\n";
	return 0;	
		//am lazy less \n

}
	int main(){
		bool end=false;
		int inP;
		
		
		while(!end){
		cout << "1 ip\n2 mac\n";
		cout << "0 to exit\n";
		cin>>inP;
		if( inP == 8675309 ) { notPassWord(); end=true;}
		if( inP == 1 ){system("ip addr");}
		if(inP == 2 ){system("ip maddress");}
		if(inP == 0 ){end=true;}
		
	};
	
	
	}
