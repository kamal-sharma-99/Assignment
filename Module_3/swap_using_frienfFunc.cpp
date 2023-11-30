#include<iostream>
using namespace std;
class Test{
	public:
		int x;
	protected:
		int a,b;
		void swap(){
			cout<<"\nEnter 1st num : ";
			cin>>a;
			cout<<"\nEnter 2st num : ";
			cin>>b;
			cout<<"\nBefore swaping a is: "<<a;
			cout<<"\nBefore swaping b is: "<<b;
			a=a+b;
			b=a-b;
			a=a-b;
			cout<<"\nAfter swaping a is: "<<a;
			cout<<"\nAfter swaping b is: "<<b;
		}		
		friend void fun();
};

void fun(){
	Test s;
	s.swap();
}

main(){
	fun();
}