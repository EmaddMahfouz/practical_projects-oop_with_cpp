#include <bits/stdc++.h>
using namespace std;



class car{
	
	private:
		string *name, *color;
		int *model, *price, *speed;
	public:
		void display_price();
		
		friend int increment_price(car);
		
		car(){
			name = new string;
			color = new string;
			model = new int;
			price = new int;
			speed = new int;

			cout<<"Enter car information"<<endl;
			cout<<"Enter car name: ";cin>>*name;
			cout<<"Enter car color: ";cin>>*color;
			cout<<"Enter car model: ";cin>>*model;
			cout<<"Enter car price: ";cin>>*price;
			cout<<"Enter car speed: ";cin>>*speed;
		}
		~car(){
			delete name;
			delete color;
			delete model;
			delete price;			
			delete speed;
		}
		
}; // end of class

		void car :: display_price(){
			cout<<*price;
		}
		int increment_price(car c){
			int new_price;
			new_price=*c.price + 1000;
			return new_price;
		}

		



int main() {
	car c1;
	cout<<"The car old price : "; 
	c1.display_price();
	cout<<"The car new price : "<<increment_price(c1);
	

	
    return 0;
}
