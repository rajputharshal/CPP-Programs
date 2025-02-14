#include<iostream>
using namespace std;
class power
{
	int ind,val;
	public:
		power(int ind ,int val)
		{
			this->ind=ind;
			this->val=val;
		}
		void set()
		{
			int p=1,i;
			for(i=1;i<=ind;i++)
			{
				p=p*val;
			}
			cout<<p;
		}
};
using namespace std;
int main()
{
	power p(2,4);
	p.set();
}
