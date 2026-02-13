#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],num=0;
	cout<<" Enter any 5 Numbers: \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n Original array output: ";
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
	for(int i=4;i>=0;i--)
	{
		b[num++]=a[i];
	}
	cout<<"\n Reverse of array: ";
	for(int i=0;i<5;i++)
	{
		cout<<b[i];
	}
	return 0;
}
