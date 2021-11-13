#include <iostream>
using namespace std;

class complex{
	int x;
	int y;
	public:
		complex(){
		x=y=0;
		}
		complex operator+(complex c){
			complex temp;
			temp.x = x + c.x;
			temp.y = y + c.y;
			return temp;
		}
		complex operator*(complex comp){
			complex temp1;
			temp1.x = (x * comp.x) - (y * comp.y);
			temp1.y = (x * comp.y) + (y * comp.x);
			return temp1;
		}
		friend istream &operator>>(istream &input, complex &t){
			cout<<"Enter real part of complex No. "<<endl;
			input>>t.x;
			cout<<"Enter imaginary part of complex No. "<<endl;
			input>>t.y;
		}
		friend ostream &operator<<(ostream &output, complex &t){
			output<<t.x<<"+"<<t.y<<"i"<<endl;
		}
};

int main(){
	complex c1, c2, c3;
	int ch=0;
	do{
		cout<<"------------------Menu----------------"<<endl;
		cout<<"1. Default Constructor"<<endl;
		cout<<"2. Enter Complex No."<<endl;
		cout<<"3. Display Complex No."<<endl;
		cout<<"4. Addition of Complex No."<<endl;
		cout<<"5. Multiplication of complex No."<<endl;
		cout<<"6. Exit"<<endl;
		cout<<"Enter choice: ";
		cin>>ch;

		switch(ch){
			case 1:
				cout<<"Default Constructor: "<<endl;
				cout<<c1;
				break;
			case 2:
				cout<<"Enter 1st complex No. "<<endl;
				cin>>c1;
				cout<<"Enter 2nd complex No. "<<endl;
				cin>>c2;
				break;
			case 3:
				cout<<"1st No is "<<endl;
				cout<<c1;
				cout<<"2nd No is "<<endl;
				cout<<c2;
				break;

			case 4:
				c3 = c1 + c2;
				cout<<"The sum of c1 and c2 is"<<endl;
				cout<<c3;
				break;
			case 5:
				c3 = c1 * c2;
				cout<<"The product of c1 and c2 is"<<endl;
				cout<<c3;
				break;
			case 6:
				exit(0);
		}
	}while (ch != 6);

	return 0;
}
