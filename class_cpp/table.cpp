#include<iostream>
using namespace std;
class table{
	int no,t;
	public:
	void setdata()
	{
		cout<<"enter your number";
		cin>>no;
	}
	void showdata()
	{
		for(int i=1;i<=10;i++)
		{
			t=no*i;
			cout<<t;
		}
	}
};
int main()
{
	int no;
	cout<<"enter table number";
	
	table t;
	t.setdata();
	t.showdata();
}