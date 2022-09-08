#include <bits/stdc++.h>
using namespace std;

class worker{
	private:
		string name;
		int sal;
	public:
		worker(){
			cin>>name>>sal;
			
		}
		
		friend float avg(worker,worker,worker,worker,worker);
		
	
}; // end of class

	float avg(worker w1, worker w2,worker w3,worker w4,worker w5){
		int sum = w1.sal+w2.sal+w3.sal+w4.sal+w5.sal;
		float v=(float)sum/5;
		return v;
		
	}


int main() {
	worker w1,w2,w3,w4,w5;
	
	cout<<"The Average of Worker's Salaries is : "<<avg(w1,w2,w3,w4,w5);
	
    return 0;
}
