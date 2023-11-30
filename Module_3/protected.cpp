/*
protected acccess specifiers :- protected is an access specifier which will call inside the class and its derived class(child classs).

if you want to call the protected member of class you have to make the derived class(child class) 
and then you can call the protected members of the class.

To make any member protected you have to write the protected keyword.

*/

#include<iostream>
using namespace std;
class A{
	protected:
		int x;
};
class B : public A{
	public:
		void getDetails(){
			cout<<"Enter the value of x:";
			cin>>x;
		}
		void display(){
			cout<<"The value of x is :"<<x;
		}
};

main(){
	B obj;
	obj.getDetails();
	obj.display();
}