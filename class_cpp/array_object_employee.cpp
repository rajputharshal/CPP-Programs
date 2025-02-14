#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		char name[50];
	public:
		void setdata()
		{
			cout<<"enter id name";
			cin>>id>>name;
		}
		void show()
		{
			cout<<id<<name;
		}
};
int main()
{
	int i,size=3;
	employee emp[size];
	for(i=0;i<size;i++)
	{
		emp[i].setdata();
	}
	for(i=0;i<size;i++)
	{
		emp[i].show();
	}
}
