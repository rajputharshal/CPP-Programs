#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"enter size";
	int size,*ptr,i;
	cin>>size;
	ptr=(int*)malloc(sizeof(int)*size);
	cout<<"enter element";
	for(i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<"  "<<ptr[i];
	}
	cin>>size;
	ptr=(int*)realloc(ptr,size);
		for(i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<"  "<<ptr[i];
	}
}
