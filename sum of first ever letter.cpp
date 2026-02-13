#include<iostream>
using namespace std;
int main()
{
	int n,num,total=0;
	cout<<" How Much array are you want \n";
	cin>>n;
	int a[n];
	cout<<" Enter any "<<n<<" Numbers: \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n Original array output: ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl;
	cout<<" Sum of Numbers: ";
	for(int i=0;i<n;i++)
	{
		num=a[i];
		do
		{
				if(num<10)
				{
					cout<<num;
					total=total+num;
					if(i==n-1)
					{
						cout<<"=";
					}
					else
					{
						cout<<"+";
					}
					break;
				}
			num=num/10;
		}while(true);
	}
	cout<<total;
	return 0;
}
