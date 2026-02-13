#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<" Enter any 10 Numbers: \n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"\n Original array output: ";
	for(int i=0;i<10;i++)
	{
		cout<<" "<<a[i];
	}
	int larg=a[0];
	int small=a[0];
	for(int i=0;i<10;i++)
	{
        if(a[i]>larg)
		{
            larg=a[i];
        }
        if(a[i]<small)
		{
            small=a[i];
        }
    }
    int sec_larg=small;
    int sec_small=larg;
    for(int i=0;i<10;i++)
	{
        if(a[i]>sec_larg&&a[i]<larg)
		{
            sec_larg=a[i];
        }
        if(a[i]<sec_small&&a[i]>small)
		{
            sec_small=a[i];
        }
    }
    cout<<"\n Before Swapping ";  
	cout<<"\n Second Largest integer is "<<sec_larg;
	cout<<"\n Second smallest integer is "<<sec_small;
	swap(sec_larg,sec_small);
	cout<<"\n After Swapping ";  
	cout<<"\n Second Largest integer is "<<sec_larg;
	cout<<"\n Second smallest integer is "<<sec_small;
	return 0;
}
