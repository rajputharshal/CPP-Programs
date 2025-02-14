#include<iostream>
using namespace std;
class arrayop{
	protected:
		int *a,size;
	public:
		void setarray(int a[],int size)
		{
			this->a=a;
			this->size=size;
		}
};

class showarray:public arrayop
{
	int i;
     public:
     	void showdata()
     	{
     		cout<<"before sorting=";
     	for(i=0;i<size;i++)
		    {
		      	cout<<a[i]<<"\t";
			}
	
		 }
};

class sortarray:public arrayop
{
	int i,j,temp;
	public:
	void opshort()
	{
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	void showsort()
	{
		cout<<"\nAfter sorting=";
		for(i=0;i<size;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
	
};

class insele:public arrayop
{
	
		int i,index,value;
	
	public:
		void setval(int index,int value)
		{
				cout<<"enter index";
				cin>>index;
				cout<<"enter value";
				cin>>value;
		}
	void setele()
	{
		++size;
			for(i=index;i<size;i--)
		{
			if(a[i]==index)
			{
				a[i]=value;
			}
		}
	}
	void showele()
	{
		for(i=0;i<size;i++)
		{
			cout<<a[i];
		}
	}
		
};

int main()
{
	char ch;
	int size,i=0;
	cout<<"enter size of array";
	cin>>size;
	int a[size];
	do
	{
	
		int no;
		cout<<"enter number";
		cin>>no;
		
		switch(no)
		{
			case 1:
					for(i=0;i<size;i++)
					{
					cin>>a[i];
					}
					showarray s;
					s.setarray(a,size);
					s.showdata();
			break;
			case 2:
						sortarray so;
						so.setarray(a,size);
						so.opshort();
						so.showsort();
			break;
			case 3:
						insele ie;
						ie.setarray(a,size);
						ie.setele();
						ie.showele();
			break;
			default:
				cout<<"enter valid";
				
		}
	
	    
		cout<<"do you want to cuntineu";
		cin>>ch;
	}while(ch=='y');
	
	
}
