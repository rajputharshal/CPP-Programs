#include<iostream>
using namespace std;
int main()
{
	int *ptr,i,size=5;
	ptr=new int[size];
	for(i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<ptr[i];
	}
}
