#include<iostream>
using namespace std;
class parent
{
	protected:
	int a;
	public:
	void set(int a)
	{
		this->a=a;
	}
};
class child:public parent
{
	public:
	void square()
	{
		cout<<a*a;
	}
};
int main()
{
	int a;
	cin>>a;
	child c;
	c.set(a);
	c.square();
	
}
