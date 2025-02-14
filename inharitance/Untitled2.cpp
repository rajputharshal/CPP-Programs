#include<iostream>
using namespace std;
class arrayop{
	private:
		int *ptr;
		void setarray()
		{
			ptr=a;
		}
};
int main()
{
	int size,i=0;
	arrayop op;
	cout<<"enter size of array";
	int a[size];
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	op.setarray(a);
	
}
