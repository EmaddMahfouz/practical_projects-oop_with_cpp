#include <bits/stdc++.h>
using namespace std;

class rectangle{
	private:
		int *W,*L;
		
	public:
		rectangle(int w, int l){
			W= new int;
			L= new int;
			*W=w;
			*L=l;
		}
		rectangle(){
			W= new int;
			L= new int;
			cout<<"Enter thr rectangle dimensions: "<<endl;
			cout<<"Enter thr rectangle Width: ";cin>>*W;
			cout<<"Enter thr rectangle length: ";cin>>*L;
		}
		~rectangle(){
		delete W;	
		delete L;		
		}
		
		int area(){
			return *W * *L;
		}
		
		void print();
		friend void largeArea(rectangle r[] , int);
		
}; // end of class

void rectangle::print (){
	cout<<*W<<*L;
}

void largeArea(rectangle r[] , int size){
	
	int max=r[0].area();
	for(int i=1 ; i<size ; i++){
        if(r[i].area() > max){
        	max=r[i].area();
		}
        }
        cout<<"The Max of Area is:"<<max<<endl;
        
}

int main() {
	const int size = 4;
	rectangle r[size];
	largeArea(r,size);
	
    return 0;
}
