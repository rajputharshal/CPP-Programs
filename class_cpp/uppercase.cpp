#include<iostream>
#include<string.h>
using namespace std;
class upper
{
	char ar[20];
	public:
	void set(char ch[])
	{
		strcpy(ar,ch);
	}
	void conver()
	{
		int i;
		while(ar[i]!='\0')
		{
			if(ar[i]>='a'&& ar[i]<='z')
			{
				ar[i]=ar[i]-32;
			}
			++i;
		}
	
	}
	void show()
	{
		cout<<ar<<"\n";
	}
};
int main()
{
	char ch[20];
	int i;
	cin>>ch;
	upper up;
	up.set(ch);
	cout<<"\nbefore\n";
	up.show();
	cout<<"\nafter\n";
	up.conver();
	up.show();
	
}
