#include<iostream>
using namespace std;
class parent
{
	public:
	static int a;
	int b;
};
int main()
{
	parent p;
	p.a=200;
	p.b=100;
	cout<<p.a<<" "<<p.b;
	return 0;
	
}
