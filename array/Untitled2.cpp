#include<iostream>
using namespace std;
class sumofa{
	private:
		int *a,b;
		int sum=0,i;
	public:
		void getdata( int a[])
		{ 
		     b=*a;
			cout<<"enter value"<<endl;
			cin>>b;
		}
		void putdata()
		{
		  sum=sum+b;
		}
		void show(){
			cout<<"array sum is = "<<sum<<endl;
		}
		
};
int main()
{
	int *a,i,size;
	sumofa s;
	cout<<"enter size";
	cin>>size;
	{
		s[i].getdata(a);
   }
	for(i=0;i<size;i++)
	{
		s[i].putdata(a);
	}
	s.show();
}