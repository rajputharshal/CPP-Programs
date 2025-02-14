#include<iostream>
using namespace std;
class parent
{
	public:
		void get()
		{
			cout<<"parent";
		}
};
class a:public parent
{
	
};
class b:public parent
{
	
};
int main()
{
	a aa;
	aa.get();
	b bb;
	bb.get();
}
