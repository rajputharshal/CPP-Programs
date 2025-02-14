#include<iostream>
using namespace std;
class avg
{
	int *a,i,sum,t;
	public:
		void getdata(int m[])
		{
			a=m;
		}
		void show()
		{
			sum=0;
			for(i=0;i<5;i++)
			{
				sum=sum+a[i];
			}
			t=sum/5;
			cout<<t;
		}
};
int main()
{
	int m[5];
	avg a;
	int i;
	for(i=0;i<5;i++)
	{
		cin>>m[i];
	}
	a.getdata(m);
	a.show();
}