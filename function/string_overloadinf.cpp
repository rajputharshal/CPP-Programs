#include<string.h>
#include<iostream>
using namespace std;
int flag=0;
int cmp(char ch[],char ch1[])
{
	int i=0;
	while(ch[i]!='\0')
	{
	   if(ch[i]==ch1[i])
	   {
	   flag=1;
		}
		else
		{
			flag=0;
			}	
		i++;
	}
	
	if(flag)
	return 1;
	else
	return 0;
}
int main()
{
	char ch[20],ch1[20];
	cout<<"first string"<<"\n";
	gets(ch);
	cout<<ch<<"\n";
	cout<<"enter second string"<<"\n";
	gets(ch1);
	cout<<ch<<"\n";
	cout<<cmp(ch,ch1);
	if(cmp(ch,ch1))
	cout<< "match";
	else
	cout<< "not match";
	return 0;
}