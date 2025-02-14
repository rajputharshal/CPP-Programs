#include<iostream>
using namespace std;
class a
{ 
	public:
		int x;
	void geta(int x)
	{
		this->x=x;
	}
	
};
class b
{
	public:
		int y;
	void getb(int y)
	{
		this->y=y;
	}
};
class result:public a,public b
{
	public:
	
	void getresult()
	{
		int add=x+y;
		cout<<add;
	}
};
int main()
{
	result r;
	r.geta(2);
	r.getb(3);
	r.getresult();
}
