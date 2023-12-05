/******************************************************************************

                              Rock Paper Scissor Game.

*******************************************************************************/


#include<iostream>
#include<cstdlib>        //including library for generating random number
#include<ctime>
using namespace std;

class game{
	public:
	int t,p,c,user,cw=0,uw=0,dw=0;          //all variables
	string name;
	void loop()
	{
		cout<<"Enter your Name : ";               //asking name of player
		cin>>name;
		
		cout<<endl<<"Hello "<<name<<" How Many Rounds You Want To Play?? : ";               //asking how many rounds player wants to play
		cin>>t;
		
	for(int i=1;i<=t;i++){                         //for loop for rounds
			srand(time(0));                // computer generating random number
        	c = rand()%3+1;
        			
		cout<<"\nRound Number : "<<i<<"/"<<t<<endl<<endl;
		
		cout<<name<<"'s Score = "<<uw<<endl<<endl;
		cout<<"Computer Score = "<<cw<<endl<<endl<<endl;
		
		cout<<"1) ROCK"<<endl<<endl;                                      // choice of player
		cout<<"2) PAPER"<<endl<<endl;
		cout<<"3) SCISSOR"<<endl<<endl<<endl;
		
		cout<<"Select Your Choice : ";
		cin>>user;
		cout<<"\nComputer Choice Is : "<<c<<endl;
		
		if(user==c)                        //condition of game 
	    {
	    	cout<<"\nDraw\n\n";
		}
		else if(user>c){
			cout<<"\nYou Win\n\n";
			uw=uw+1;
		}
		else if(user<c){
			cout<<"\nComputer Win\n\n";
			cw=cw+1;
		}
		
	}
		if(cw==uw){                       // declaring winner
			cout<<"Game Is Drawn";
		}
		if(cw>uw){
			cout<<"Computer is winner";
		}
		if(cw==uw){
			cout<<name<<" Is The Winner Of This Game";
		}
}
};

main()
{
	game cg;      //   class
	cg.loop();    //   game function
	
}