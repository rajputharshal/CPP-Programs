#include<iostream>
using namespace std;
class employe
{
	private:
		int id;
		char ch[90];
		int sal;
	public:
		void gatedata()
		{
			cout<<"enter your id name sal\n";
			cin>>id>>ch>>sal;
		}
		void showdata()
		{
		   cout<<"\t"<<id<<"\t"<<ch<<"\t"<<sal<<"\n";	
		}
		int getsal()
		{
			return sal;
		}
};
int main()
{
	int i,temp,msal;
	employe emp[5];
	cout<<"enter emp data\n";
	for(i=0;i<5;i++)
	{
		emp[i].gatedata();
	}
	cout<<"display emp data\n";
	for(i=0;i<5;i++)
	{
		emp[i].showdata();
	}

	for(i=0;i<5;i++)
	{
	
		for(int j=0;j<5;j++)
	{
	   		if(emp[j].getsal()<emp[i].getsal())
	   		{
 
				employe temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
	   		}
    }
}
	   			
	cout<<"\nDisplay all data after sorting\n";
	   for(i=0; i<5; i++)
	   { 
	      emp[i].showdata();
	   }            

}