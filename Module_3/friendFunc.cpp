/*
friend function:- its a special type of function which is used to access the private member of class.

to use friend function you have to just write friend keyword in front of method name.

when you declare any fumction as a friend function you can access the pivate members of the class.
*/
#include<iostream>
using namespace std;
class Test{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
		
		friend void fun();
};

void fun(){
	Test t;
	t.x=10;
	t.y=20;
	t.z=30;
	
	cout<<"\nThe value of x is : "<<t.x;
	cout<<"\nThe value of y is : "<<t.y;
	cout<<"\nThe value of z is : "<<t.z;
}

main(){
	fun();
}