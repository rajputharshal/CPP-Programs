#include<iostream>
#include<string.h>
using namespace std;
class upper{
	private:
		char ch[90];
	public:
		void getdata(char name[])
		{
	
				//strcpy(ch,name);
			int i=0;
			while(ch[i]!='0')
			{
				ch[i]=name[i];
				i++;
			}
		}
		void showop()
		{
			int cnt=0;
			while(ch[cnt]!='\0')
			{
				if(ch[cnt]>='a'&&ch[cnt]<='z')
				{
					ch[cnt]=ch[cnt]-32;
					
				}
				++cnt;
			}
			
		}
		void show()
		{
			cout<<ch<<"\n";
		}
};
int main()
{
	upper up;
	char name[90];
	cout<<"enter string\n";
	cin>>name;
	up.getdata(name);
	cout<<"before convertion\n";

		up.show();
		up.showop();
	
	cout<<"after convert\n";
	up.show();
	
	
}
