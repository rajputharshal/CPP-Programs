#include<iostream>
using namespace std;
class student
{
	int i,sum=0;
	float avg;
	public:
	void setsubmark(int a[],int size)
	{
		cout<<"enter student subject marks";
		for(i=0;i<size;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<size;i++)
		{
			cout<<a[i]<<"\n";
		}
	}
	void checkgrades(int a[],int size)
	{
		for(i=0;i<size;i++)
		{
			sum=sum+a[i];
		}
		cout<<"total mark="<<sum<<"\n";
		avg=sum/size;
		cout<<"precenteage="<<avg<<"\n";
		if(avg>=75&&avg<=100)
		{
			cout<<"first";
		}
		else if(avg>=60&&avg<=74)
		{
			cout<<"second"<<"\n";
		}
		else if(avg>=45&&avg<=59)
		{
			cout<<"third"<<"\n";
		}
		else
		{
			cout<<"failed";
		}
	}
	
};
int main()
{
	int size;
	cout<<"enter no of student"<<"\n";
	cin>>size;
	int a[size];
	student s;
	s.setsubmark(a,size);
	s.checkgrades(a,size);
}