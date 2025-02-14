#include<iostream>
using namespace std;
class avrage{
	
	int sub1,sub2,sub3;
	public:
	void getdata(int s1,int s2,int s3)
	{
		sub1=s1;
		sub2=s2;
		sub3=s3;
	}
	void showdata()
	{
		cout<<(sub1+sub2+sub3)/3;
	}
};
int main()
{
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	avrage a;
	a.getdata(s1,s2,s3);
	a.showdata();
}