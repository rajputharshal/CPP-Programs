#include<iostream>
using namespace std;
class add
{
	private:
		int x,y;
	public:
	void setdata()
	{
		cout<<"enter number";
		cin>>x>>y;
	}
	 void getadd()
	{
		cout<<x+y;
	}
};
int main()
{
	add a;
	a.setdata();
	a.getadd();
}
