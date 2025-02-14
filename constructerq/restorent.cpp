#include<iostream>
using namespace std;
class classrest{
	private:
	char name[90];
	char cat[90];
	int p;
	public:
		classrest()
		{
			cout<<"enter name price cat";
			cin>>name>>p>>cat;
		}
		int show()
		{
			cout<<name<<p<<cat;
		}
};
int main()
{
	
	cout<<"enter size";
	int size,i,no1;
	cin>>size;
	classrest *cl= new classrest[size];
	for(i=0;i<size;i++)
	{
		cl[i];		
	}
	do{
		cout<<"press 1 to dispay all value";
		int no,i;
		cin>>no;
		switch(no)
		{
			case 1:
				for(i=0;i<size;i++)
				{
					cl[i].show();
				}
			break;
			case 2:
				
			default:
				cout<<"enter vali";  
		}
		cout<<"if you want to contenue press 1";
		cin>>no1;
	}while(no1==1);
}