#include<iostream>
using namespace std;
int main()
{
	int n;
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
	int larg=a[0];
	int smal=a[0];
	for(int i=0;i<n;i++)
	{
        if(a[i]>larg)
		{
            larg=a[i];
        }
        if(a[i]<smal)
		{
            smal=a[i];
        }
    }
	cout<<"\n Maximum integer is "<<larg;
	cout<<"\n Minimum integer is "<<smal;
	return 0;
}
