#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	char Replay;
	cout<<"------NUMBER GUESS GAME__-------"<<endl;
	do
	{
		int n=rand()%500;
		int guess;
		int count=0;
	    do
	    {
	    	cout<<"Enter your guess number:"<<endl;
	        cin>>guess;
	        count++;
	    	if(guess==n)
	    	{
	    		cout<<"I Found your guess number"<<endl;
	    		cout<<"Count of tries for correct guess number:"<<count<<endl;
			}
			else if(guess>n)
			{
				cout<<"Your guess number is Greater than N"<<endl;
			}
			else
			{
				cout<<"Your guess number is Lower than N"<<endl;
			}
		} while(guess!=n);
		cout<<"Do you want to Replay the game?(y/n):";
		cin>>Replay;
	} while(Replay=='y'||Replay=='Y');
	return 0;
}
