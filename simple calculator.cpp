#include<iostream>
using namespace std;
int main()
{
	long double n1,n2;
	char choice;
	cout<<"Enter the number:";
	cin>>n1;
	cout<<"Enter the number:";
	cin>>n2;
	cout<<"Enter +,-,*,/,% for calculation:";
	cin>>choice;
	switch(choice)
	{
		case '+':
			cout<<"Addition of number:";
			cout<<n1+n2;
			break;
		case '-':
			cout<<"subraction of number:";
			cout<<n1-n2;
			break;
		case '*':
			cout<<"Multiplication of number:";
			cout<<n1*n2;
			break;
		case '/':
			if(n1==0)
			{
			    cout<<"it is not divided by zero";
			}
			else
			{
			    cout<<"Division of number:";
	     		    cout<<n1/n2;
		        }
		        break;
		default:
			cout<<"invalid choice:";
			break;
	}
	return 0;
}
