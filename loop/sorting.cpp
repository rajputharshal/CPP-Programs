#include<iostream>
#include<string.h>
using namespace std;
void sort(int a[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<a[i];
	}
}
void sort(char ch[])
{
	
	int i,j;
	for(i=0;i<strlen(ch);i++)
	{
		for(j=i+1;j<strlen(ch);j++)
		{
			char temp=ch[i];
			ch[i]=ch[j];
			ch[j]=temp;
		}
	}

		cout<<ch;
	
}
int main()
{
	int a[5]={10,50,20,710,56};
	char ch[]={"ywbfkjea"};
	sort(a);
	sort(ch);
}
