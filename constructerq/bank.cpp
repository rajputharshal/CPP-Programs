#include<iostream>
using namespace std;
class addamount
{
	private:
        
    	int amount=50;
	public:
	addamount()
	{
		cout<<amount;	
	}
	
	addamount(int amt)
	{
		int result;
		result=amount+amt;
		cout<<"\n total amount="<<result;
     }
};
int main()
{
	int amt=23;
	addamount a3;
	addamount a1(amt);
	
}
	      