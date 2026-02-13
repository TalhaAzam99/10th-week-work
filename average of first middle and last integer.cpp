#include<iostream>
using namespace std;
int main()
{
	float a[11],sum=0,avg=0;
	cout<<" Write any 11 Numbers: \n";
	for(int i=0;i<11;i++)
	{
		cout<<"Element "<<i+1<<": ";
		cin>>a[i];	
	}
	for(int i=0;i<11;i++)
	{
		sum=a[0]+a[5]+a[10];
		avg=sum/3;
	}
	cout<<"\n Average of First, middle and Last Integer ="<<avg;	
	return 0;
}
