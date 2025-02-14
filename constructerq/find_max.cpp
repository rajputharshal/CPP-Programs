#include<iostream>
using namespace std;
class maxapp
{
	int *p;
//	int max=0;
	public:
	maxapp(int a[])
	{
		p=a;
	}
 	
	void maxfind()
	{
		int max=p[0];
 		
		int i;
		for(i=0;i<5;i++)
		{
			if(max<p[i])
			{
				max=p[i];
			}	
		}
	
		cout<<"hghg"<<max;
	}
	
};
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	maxapp mp(a);
	mp.maxfind();
	
}
