#include<iostream>
using namespace std;
class findmax{
	private:
		int i;
	public:
		void setdata()
		{
			cin>>i;
		}
		void showdata()
		{
			cout<<i;
		}
		int get()
		{
			return i;
		}
};
int main()
{
	int size,i;
	cout<<"enter size";
	cin>>size;
	findmax f[5];
	for(i=0;i<5;i++)
	{
	   f[i].setdata();
	}
    for(i=0;i<5;i++)
    {
    	f[i].showdata();
	}
	int s;
	s=f[0].get();
	for(i=0;i<s;i++)
	{
		if(s<f[i].get())
		{
			s=f[i].get();
		}
	}
	cout<<"result"<<s;

	
	
}