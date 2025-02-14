#include<iostream>
using namespace std;
class parent
{
	public:
	void mul(int x,int y)
	{
  	 cout<<x*y;	
	}
	void mul(float x,int y)
	{
		cout<<x*y;
	}	
};
int main()
{
	parent p;
	p.mul(3,3);
	p.mul(7.7f,1);
}
