#include <bits/stdc++.h>
using namespace std;
class student;

class department{
	private:
		string name, address;
	public:
		void read_info(){
			cout<<"Enter Department's name and address:"<<endl;
			cin>>name>>address;
		}
		friend void show(department,student);

}; // end of class

class student{
	private:
		string std_name;
		int deg[7];
	public:
		student(){
			cout<<"Enter student's information:"<<endl;
			cout<<"Enter student's Name:";
			cin>>std_name;
			cout<<"Enter student's degree (7):";
			for(int i=0 ; i<7 ; i++){
				cin>>deg[i];
			}
		}
		
		friend void show(department,student);

}; // end of class


void show( department d , student s){
	cout<<"department is:"<<d.name<< " - " <<"address is:"<<d.address<<endl;
	
	cout<<"student's name is: '"<<s.std_name;
	
	int sum=0;
	for(int i=0 ; i<7 ; i++){
	sum+=s.deg[i];
	}
	float v = (float) sum/7;
	
	cout<<"student's GPA is:"<<v<<endl;
}



int main() {
	department d;
	
	d.read_info();
	
	student s;
	
	show(d, s);
	
    return 0;
}
