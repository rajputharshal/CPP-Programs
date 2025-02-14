#include<iostream>
using namespace std;
class indb
{
	int index,base;
	public:
	void getdata()
	{
		cin>>index>>base;
	}
	void showdata()
	{
		int p=1;
		for(int i=1;i<=index;i++)
		{
			p=p*base;
		}
		cout<<p;
	}
};
int main()
{
	indb i;
	i.getdata();
	cout<<"power is";
	i.showdata();
}