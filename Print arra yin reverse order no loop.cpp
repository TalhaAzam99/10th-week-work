#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5];
	cout<<" Already Declared Numbers: ";
	cout<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4];
	cout<<"\n Write any 5 Numbers and store in previous array: \n";
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	cout<<"\n Print 5 Numbers: ";
	cout<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4];
	cout<<"\n Reverse of 5 Numbers: ";
	cout<<" "<<a[4]<<" "<<a[3]<<" "<<a[2]<<" "<<a[1]<<" "<<a[0];
	return 0;
}
