#include<iostream>
#include<math.h>
using namespace std;
class s_interest
{
	protected:
	float amount;
	float rate;
	float years;
	public:
		void getdata(float amount,float rate,float years)
		{
			this->amount=amount;
			this->rate=rate;
			this->years=years;
		}
};
class claculate:public s_interest
{
	
	public:
		float getcal()
		{
			
			float result=(amount*rate*years)/100;
			return result;
		}
};
class cmt:public s_interest
{
	public:
	int x,y,ci;
	void getci()
	{
		x=(1+(rate/100));
		y=pow(x);
		return ci=(amount*y)-amount;
	}
	
};
void main()
{
	float amount;
	float years,rate;
	cout<<"amount=";
	cin>>amount;
	cout<<"rate";
	cin>>rate;
	cout<<"years";
	cin>>years;
	claculate c;
	c.getdata(amount,rate,years);
	float result=c.getcal();
	cout<<"simple interst is= "<<result;
	cmt cm;
	float r=cm.getci();
	cout<<r;
	
}
