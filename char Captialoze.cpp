#include<iostream>
using namespace std;
int main()
{
	char sent[20];
	int a=0,e=0,i_cen=0,o=0,u=0,upper=0,lower=0;
	cout<<"\n Enter a Sentence: ";
	cin.getline(sent,20);
	for(int i=0;sent[i]!='\0';i++)
	{
		char ch=sent[i];
		if(ch>='A'&&ch<='Z')
		{
			upper++;
		}
		else
		{
			lower++;
		}
		if(ch=='a'||ch=='A')
		{
			a++;
		}
		else if(ch=='e'||ch=='E')
		{
			e++;
		}
		else if(ch=='i'||ch=='I')
		{
			i_cen++;
		}
		else if(ch=='o'||ch=='O')
		{
			o++;
		}
		else if(ch=='u'||ch=='U')
		{
			u++;
		}
		if(i==0||sent[i-1]==' ') 
		{
            if(ch>='a'&&ch<='z') 
			{
                sent[i]=ch-32;}}}
	cout<<"\n Uppercase letters: "<<upper;
    cout<<"\n Lowercase letters: "<<lower;
	cout<<"\n Vowel Frequencies"<<endl;
    cout<<"A: "<<a<<" | E: "<<e<<" | I: "<<i_cen<<" | O: "<<o<<" | U: "<<u<<endl;
    cout<<"\nModified Sentence: "<<sent<<endl;
	return 0;}
