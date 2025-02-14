#include<iostream>
int main()
{
	int size,*ptr;
	cout<<"enter size of array";
	cin>>size;
	ptr=new int[size];
	cout<<"enter values in array";
	for(i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	cout<<"display array values";
	for(i=0;i<size;i++)
	{
		cout<<ptr[i]<<"\t";
	}
	return 0 ;
}