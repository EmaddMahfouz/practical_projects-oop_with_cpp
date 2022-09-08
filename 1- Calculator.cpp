#include <bits/stdc++.h>
using namespace std;

class calc{
	private:
		int *n1,*n2;
	public:
		calc(){
		 	n1=new int;
		 	n2=new int;
			cout<<"Enter first number:";
			cin>>*n1;
			cout<<"Enter last number:";
			cin>>*n2;
		}
		~calc(){
			delete n1;
			delete n2;
			cout<<"data members are deleted"<<endl;
		}
		
		int sum(){
			return *n1 + *n2;
		}
		
		int sub(){
			return *n1-*n2;
		}
		
		int mult(){
			return *n1 * *n2;
		}
		
		int div(){
			return *n1 / *n2;
		}
		
		int rem(){
			return *n1 % *n2;	
		}
	
}; // end of class

int main() {
	calc c;
	cout<<"There sum is :"<<c.sum()<<endl;
	cout<<"There sub is :"<<c.sub()<<endl;
	cout<<"There mult is :"<<c.mult()<<endl;
	cout<<"There div is :"<<c.div()<<endl;
	cout<<"There rem is :"<<c.rem()<<endl;	
    return 0;
}
