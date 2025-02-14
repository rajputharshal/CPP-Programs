#include<iostream>
using namespace std;
class value
{
  protected:
  int x,y;
  public:
  virtual void getdata()
  {
  	cout<<"enter value of x";
  	cin>>x;
  	cout<<"enter value of y";
  	cin>>y;
  }	
};
class add:public value
{
	public:
	void addv()
	{
		int op;
		op=x+y;
		cout<<" add="<<op;
	}
};
class sub:public value
{
	public:
	void subv()
	{
		int op;
		op=x-y;
		cout<<"\n"<<"sub"<<op;
	}
};
class mul:public value
{
	public:
	void mulv()
	{
		int op;
		op=x*y;
		cout<<"\n"<<"mul"<<op;
	}
};
int main()
{
	 int cn;
	do{
		int no;
		cout<<"enter your choise";
		cin>>no;
		
		switch(no)
		{
			case 1://only given value of variable
				value v;
				v.getdata();
			break;
			case 2://add
				add a;
				a.getdata();
				a.addv();
			break;
			case 3:// sub
				sub s;
				s.getdata();
				s.subv();
			break;
			case 4:
				mul m;
				m.getdata();
				m.mulv();
			break;
			default:
				cout<<"invalid";
		}
	    cout<<"do you want to contineu";
	    cin>>cn;
	}while(cn==1);
}
