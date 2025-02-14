#include<iostream>
using namespace std;

class parent
{ int x,y;
	public:
		void setdata(int a,int b);
		void show();
		
};
void parent::setdata(int a,int b)
{
	x=a;
	y=b;
}
void parent::show()
{
	cout<<x+y;
}


int main()
{
	int a=3,b=3;
	parent p;
	p.setdata(a,b);
	p.show();
}
