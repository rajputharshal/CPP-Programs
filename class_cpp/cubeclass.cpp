#include<iostream>
using namespace std;
class cube
{
	int a;
	public:
	void set(int a)
	{
		this->a=a;
	}
	int show()
	{
		return a*a*a;
		
	}
};
int main()
{
	int a=3;
	cube c;
	c.set(a);
	int result=c.show();
	cout<<result;
	
}
