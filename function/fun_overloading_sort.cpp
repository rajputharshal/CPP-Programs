#include<iostream>
#include<string.h>
using namespace std;
void sort(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
				if(a[i]<a[j])
				{
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;			
				}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
}
void sort(char ch[])
{
	for(int i=0;i<strlen(ch);i++)
	{
		for(int j=i+1;j<strlen(ch );j++)
		{
			if(ch[i]>ch[j])
			{
				int temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
	cout<<"\n"<<ch;
}

int main()
{
	int a[]={5,3,1,2,6};
	char ch[]={"harshal"};
	sort(a);
	sort(ch);	
}
