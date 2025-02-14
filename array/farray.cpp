#include<iostream>
using namespace std;
int main()
{
	int size,i;
	cout<<"enter size of array";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<"\n";
	}
}