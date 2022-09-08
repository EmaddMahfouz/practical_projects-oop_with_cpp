#include <bits/stdc++.h>
using namespace std;
class engineer;

class teacher{
	private:
		string *name;
		int *age;
		int *id;
		int *salary;
	public:
		teacher(){
			name = new string;
			age = new int;
			id = new int;
			salary = new int;
			cin>>*id>>*name>>*age>>*salary;
		}
		~teacher(){
			delete name;
			delete age;
			delete id;
			delete salary;
		}
		
		void print(){
			cout<<" ID : "<<*id<<" Name : "<<*name <<" Age : "<<*age<<" Salary : "<<*salary<<endl;
		}
		friend void bonus(teacher &, engineer &);

	
	
}; // end of class

class engineer{
		private:
		string *name;
		int *age;
		int *id;
		int *salary;
	public:
		engineer(){
			name = new string;
			age = new int;
			id = new int;
			salary = new int;

			cin>>*id>>*name>>*age>>*salary;
		}
		~engineer(){
			delete name;
			delete age;
			delete id;
			delete salary;
		}
		void print(){
			cout<<" ID : "<<*id<<" Name : "<<*name <<" Age : "<<*age<<" Salary : "<<*salary<<endl;
		}
		friend void bonus(teacher &, engineer &);

}; // end of class

void bonus(teacher &t1 , engineer &e1){
	*t1.salary= *t1.salary+1000;
	*e1.salary= *e1.salary+1000;
}

		
int main() {
	teacher t1;
	engineer e1;
	t1.print();
	e1.print();
	
	bonus(t1,e1);
	
	t1.print();
	e1.print();
	

	
    return 0;
}
