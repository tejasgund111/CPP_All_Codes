#include<iostream>
using namespace std;
int main(){
	string password="Tejas";
	cout<<"enter your password:"<<flush;
	string input;
	cin>>input;
	
	
	if(input=="Tejas"){
	cout<<"password Accepted."<<endl;
	}
	
	
	if(input !="Tejas"){
	cout<<"Access denied.Go back and enter correct password."<<endl;
	}
	return 0;
}
