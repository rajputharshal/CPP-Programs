#include<iostream>
using namespace std;
class parent
{
	public:
	static int a;
	int b=0;
};
int parent::a=0;
int main()
{
	int c;
	parent p1,p2;
	p1.a=200;
	p1.b=100;
	cout<<"Before ";
	cout<<p1.a<<" "<<p1.b;
	cout<<"\nAfter ";
	cout<<p2.a<<" "<<p2.b;
	return 0;
	
}
