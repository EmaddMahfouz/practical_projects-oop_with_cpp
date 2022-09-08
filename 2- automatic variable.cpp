#include <bits/stdc++.h>
using namespace std;

class recrangle{
private:
	int width;
	int length;
	
public:
	recrangle(){
		width=10;
		length=20;
	}
	int area(){
		return width*length;
	}
	
	
	
}; // end of class

int main() {
	recrangle r1;
	cout<<r1.area()<<endl;

    return 0;
}
