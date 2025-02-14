#include<iostream>
#include<string.h>
using namespace std;
class copyapp
{
	int id;
	char name[90];
	public:
	copyapp
	(int id,char name[])
	{
		this->id=id;
		strcpy(this->name,name);
	}
	copyapp(copyapp & a)
	{
		this->id=id;
		strcpy(this->name,name);
	}
	void show()
	{
		cout<<id<<name;
	}
	
};
int main()
{
	copyapp cc(1,"ganesh");
	cc.show();
	copyapp c(cc);
	cc.show();
}
