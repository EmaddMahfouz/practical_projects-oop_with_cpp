#include <bits/stdc++.h>
using namespace std;

class student{
	private:
		string *name, *address;
		int *id , *age , *mark;	
	public:
		student(string n , string ad , int i , int ag, int m){
			name=new string;
			address=new string;
			id=new int;
			age=new int;
			mark=new int;
			
			*name=n;
			*address=ad;
			*id=i;
			*age=ag;
			*mark=m;
		}
		
		student(){
			name=new string;
			address=new string;
			id=new int;
			age=new int;
			mark=new int;
			cout<<"Enter Student Information:"<<endl;
			cout<<"Enter Name:"<<endl;
			cin>>*name;
			cout<<"Enter Address:"<<endl;
			cin>>*address;
			cout<<"Enter ID:"<<endl;
			cin>>*id;
			cout<<"Enter Age:"<<endl;
			cin>>*age;
			cout<<"Enter Mark:"<<endl;
			cin>>*mark;
		}
		~student(){
			delete name;
			delete address;
			delete id;
			delete age;
			delete mark;
		}
		
		friend int passing(student,student,student,student,student);
}; // end of class

int passing(student s1,student s2,student s3,student s4,student s5){
	int cnt=0;
	if(*s1.mark >= 50) cnt++;
	if(*s2.mark >= 50) cnt++;
	if(*s3.mark >= 50) cnt++;
	if(*s4.mark >= 50) cnt++;
	if(*s5.mark >= 50) cnt++;
	
	return cnt;
}


int main() {
	student s1,s2,s3,s4,s5;
	cout<<"The Number of passing students are:"<<passing(s1,s2,s3,s4,s5);
	
    return 0;
}
