#include<iostream>
using namespace std;
class circle{
	protected:
		float r;
	public:
	void setdata(float r)
	{
		this->r=r;
	}
};
class area:public circle
{
	public:
		float getdata()
		{
			return 3.14f*r*r;
		}
};
int main()
{
	float no;
	cout<<"enter the value";
	cin>>no;
	area a;
	a.setdata(no);
    float	result=a.getdata();
	cout<<"your result is="<<result;
}
