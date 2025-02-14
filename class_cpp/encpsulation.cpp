#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	private:
	int sal,id;
	char name[];
	public:
		void setdata()
		{
			cout<<"enter id name sal";
			cin>>id>>name>>sal;
		}
		void getdata(char type[])
		{
			if(strcmp(type,"sss")==0)
			{
				cout<<id;
			}
			else if(strcmp(type,"mmm")==0)
			{
				cout<<id<<name<<sal;
			}
			else
			{
				cout<<"enter valid";
			}
		}
};
int main()
{
	cout<<"enter ";
	employee emp;
	emp.setdata();
	int c;
	cout<<"choise";
	cin>>c;
	switch(c)
	{
		case 1:
			emp.getdata("sss");
			break;
		case 2:
			emp.getdata("mmm");
			break;
			
		default:
				cout<<"enter vlid";
	}
}
