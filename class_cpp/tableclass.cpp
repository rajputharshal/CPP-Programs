#include<iostream>
using namespace std;
class table
{
	private:
	int a;
	public:
	void setdata()
	{
		cout<<"enter number";
		cin>>a;	
	}	
	void show()
	{
		int i;
		for(i=0;i<10;i++)
		{
			cout<<a*i;
		}
	}
};
int main()
{
	table t;
	t.setdata();
	t.show();
}
