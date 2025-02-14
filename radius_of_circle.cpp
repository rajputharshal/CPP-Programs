#include<iostream>
using namespace std;
class circle
{
	float radius;
	public:
		void red(int r)
		{
			radius=r;
		}
		void show()
		{
			 cout<<radius*radius*3.14f;
		}
};
int main()
{
	int r;
	float t;
	cout<<"enter radius";
	cin>>r;
	circle c;
	c.red(r);
	c.show();

	
	
}