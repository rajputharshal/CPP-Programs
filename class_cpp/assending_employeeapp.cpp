#include<iostream>
using namespace std;
class employee
{
	int sal,id;
	char name[39];
	public:
		void set()
		{
			cout<<"enter id name sal";
			cin>>id>>name>>sal;
		}
		void show()
		{
			cout<<id<<name<<sal<<"\n ";
		}
		int setsal()
		{
			return sal;
		}
		
};
int main()
{
	employee emp[3];
	int i,j;
	for(i=0;i<3;i++)
	{
		emp[i].set();
	}
	cout<<"before sort";
	for(i=0;i<3;i++)
	{
		emp[i].show();
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(emp[i].setsal()<emp[j].setsal())
			{
				employee temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
		}
	}
	cout<<"after\n";
	for(i=0;i<3;i++)
	{
		emp[i].show();
	}
	
}
