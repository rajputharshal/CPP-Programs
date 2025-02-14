#include<iostream>
using namespace std;
class programming
{
	public:
	void getdata()
	{
	    cout<<"i love programming\n";
	}
	void showdata(char a[])
	{
		cout<<"i love"<<a;
	}
	
};
int main()
{
	char name[20];

	gets(name);
	programming p;
	p.getdata();
	p.showdata(name);
}