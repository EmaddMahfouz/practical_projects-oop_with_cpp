#include <bits/stdc++.h>
using namespace std;

class recrangle{
private:
	const int width;
	int length;
	
public:
	static int total;
	recrangle(int a,int b): width(a){
		length=b;
		++total;
	}
	int area(){
		return width*length;
	}
	
}; // end of class

int recrangle :: total=0;

int main() {
	recrangle r1(20,10);
	recrangle r2(10,5);

	cout<<r1.area()<<endl;
	cout<<r2.area()<<endl;
	cout<<recrangle:: total<<endl;



    return 0;
}
