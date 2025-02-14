#include<iostream>
using namespace std;
class add
{
	int x,y;
	public:
	void set(int x,int y);
	void show();
};
void add::set(int x,int y)
{
	this->x=x;
	this->y=y;
}
void add:: show()
{
	cout<<x+y;
}
int main()
{
	add *ad=new add();
	ad->set(3,6);
	ad->show();
}
