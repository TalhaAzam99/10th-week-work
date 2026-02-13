#include<iostream>
using namespace std;
int main()
{
	bool present=false;
	int a[5],num;
	cout<<" Write any 5 Numbers: \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];	
	}
	cout<<"\n Which Number do you want to find ";
	cin>>num;
	for(int i=0;i<5;i++)
	{
		if(num==a[i])
		{
			present=true;

		}
	}
	if(present)
	{
		cout<<" This Number Is Present ";
	}
	else
	{
		cout<<" This Number is Not Present ";
	}
	return 0;
}
