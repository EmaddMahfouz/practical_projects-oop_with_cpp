#include <bits/stdc++.h>
using namespace std;

class emp{
	private:
		int *id;
		string *name;
		int *age;
		string *address;
		int *salary;		
		int *loan;
		int static totalLoan;
		
	public:
		emp(int i, string n, int a, string d,int s){
			id= new int;
			name= new string;
			age= new int;
			address= new string;
			salary= new int;
			loan= new int;
			
			*id=i;
			*name=n;
			*age=a;
			*address=d;
			*salary=s;
			*loan=500;
		} // end of constructor
		
		void print(){
			cout<<"The employee info: "<<endl;
			cout<<"ID :"<<*id<<endl;
			cout<<"Name :"<<*name<<endl;
			cout<<"Age :"<<*age<<endl;
			cout<<"Address :"<<*address<<endl;
			cout<<"Salary :"<<*salary<<endl;
		} // end of method
		
		emp(){
			id= new int;
			name= new string;
			age= new int;
			address= new string;
			salary= new int;
			loan= new int;
			
			*loan=500;
			
			cout<<"Enter ID :"; cin>>*id;
			cout<<"Enter Name :"; cin>>*name;
			cout<<"Enter Age :"; cin>>*age;
			cout<<"Enter Address :"; cin>>*address;
			cout<<"Enter Salary :"; cin>>*salary;
		} // end of constructor
		
		~emp(){
			delete id;
			delete name;
			delete age;
			delete address;
			delete salary;
			delete loan;
		} // end of destructor
		
		int getsum(){
			return *salary;
		} // end of method
		
		void performloan(){
			*salary -= *loan;
			totalLoan+=*loan;
		} // end of method
		
		void addTotalLoan(){
			*salary += totalLoan;
		} // end of method
		
		
}; // end of class

int emp::totalLoan=0; // definition : static variable 

int main() {
	emp e1(43577,"Emad",20,"cairo",5000);
	emp e2(23423,"Ahmed",21,"cairo",6000);
	emp e3(65757,"Mohamed",22,"cairo",7000);
	e1.print();
	e2.print();
	e3.print();
	int sumsal=e1.getsum()+e2.getsum()+e3.getsum();
	cout<<"The salary summation is : "<<sumsal<<endl;
	e1.performloan();
	e2.performloan();
	e3.performloan();
	
	e1.print();
	e2.print();
	e3.print();
	
	e3.addTotalLoan();
	e3.print();
	
	
    return 0;
}
