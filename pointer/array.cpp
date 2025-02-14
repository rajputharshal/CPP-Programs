#include<iostream>
using namespace std;
int main()
{
	int *ptr,i;
	int a[5];
	ptr=a;
	for(i=0;i<5;i++)
	{
		cin>>*ptr;
		ptr++;
	}
	ptr=ptr-5;
	for(i=0;i<5;i++)
	{
		cout<<*ptr;
		ptr++;
	}
}
