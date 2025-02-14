#include<iostream>
using namespace std;
class rectangle 
{
	public:
	rectangle()
	{
		int len=0,br=0;
		cout<<"default="<<len*br;
	}

	rectangle(int a,int b)
	{
		cout<<"\nparameteres="<<a*b;
	}
	rectangle(int len)
	{
		int br;
		br=len;
		cout<<"one parameter="<<len*br;
	}
};
int main()
{
	int len=6,br=3;
	rectangle r;
	rectangle r1(len,br);
	rectangle r2(len);
	
}
 