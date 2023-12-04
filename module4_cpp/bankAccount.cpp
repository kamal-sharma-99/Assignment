#include<iostream>
using namespace std;

class Bank{
	public:
			int accNum,balance,d,w;
			string name,type;
			
		void account(){
			cout<<"Enter depositor name\n";
			cin>>name;
			cout<<"Enter account number\n";
			cin>>accNum;
			cout<<"Enter account type\n";
			cin>>type;
			cout<<"Enter account balance\n";
			cin>>balance;
		}
		
		void deposit(){
			cout<<"\nEnter amount you want to deposit\n";
			cin>>d;
		}
		void depositDisplay(){
			cout<<"\nDepositor name is : "<<name;
			balance+=d;
			cout<<"\nAccount balance : "<<balance;
			
		}
		void withdraw(){
			cout<<"\nEnter amount you want to withdraw\n";
			cin>>w;
		}
		void wDisplay(){
			cout<<"\nWithdrawer name is : "<<name;
			cout<<"\nAccount balance : "<<balance-w;
			
		}
		
		void accDisplay(){
			cout<<"\nDepositor name is : "<<name;
			cout<<"\nAccount number is : "<<accNum;
			cout<<"\nAccount type : "<<type;
			cout<<"\nAccount balance : "<<balance;
			
		}
};
main(){
	Bank b;
	b.account();
	b.accDisplay();
	b.deposit();
	b.depositDisplay();
	b.withdraw();
	b.wDisplay();
}
