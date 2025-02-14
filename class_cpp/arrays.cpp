#include<iostream>
using namespace std;
class arrays
{
	int *b;
	public:
	void set(int a[])
	{
		b=a;
	}
	void show()
	{
		int i;
		for(i=0;i<5;i++)
		{
		cout<<b[i];
		}
	}
};
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	arrays ar;
	ar.set(a);
	ar.show();
}
