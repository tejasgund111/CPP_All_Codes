#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter any values from 1 to 3:"<<endl;
	
	int number;
	cin>>number;
	
	if(number==1){
		cout<<"Entered no. is one."<<endl;
	}
	else if(number==2){
		cout<<"Entered no. two."<<endl;
	}	
	else if(number==3){
	cout<<"Entered no. is three"<<endl;
	}
	else{
		cout<<"invalid no. entered"<<endl;
	}
	return 0;
	
}

