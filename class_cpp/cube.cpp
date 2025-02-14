#include<iostream>
using namespace std;
class cube{
	int x;
	public:
		void getdata(int x)
		{
		  this->x=x;	
		}
		void showdata()
		{
			cout<<x*x*x;
		}
};
int main()
{
	int x=10;
	cube c;
		c.getdata(x);
		c.showdata();
}
