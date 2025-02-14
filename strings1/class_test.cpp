#include<iostream>
#include<string.h>
using namespace std;
class test
{
	char str[90];
	int count=0,vct=0;
	public:
    void  testone( char ch[])
	{
		strcpy(str,ch);
	}	
	int testsecond()
	{		
		while(str[count]!='\0')
		{
			if(str[count]>='A'&&str[count]<='Z')
			{
				str[count]=str[count]+32;
			}
			switch(str[count])
			{
			    	case 'a':
					
					case 'e':
						
					case 'i':
				
					case 'o':
		
					case 'u':
					++vct;
			}
			++count;
		}
		return vct;
	}
};
int main()
{

	
		char ch[90];
		int vct;
		cout<<"enter the charector";
		gets(ch);
		test t;
		t.testone(ch);
		
		cout<<t.testsecond();
	
}