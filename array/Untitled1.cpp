#include<iostream>
    using namespace std;
    class setarray
    {
        int *str,i,sum=0,add;
		public:
		  void array(int a[])
		  {
		  	str=a;
		  }	
		  void getSum()
		  { 
		   sum=0;

		  for(i=0;i<5;i++)
		    {
		    	int sum=sum+str[i];

		    }
		    cout<<"Sum of array:"<<sum<<"\n";
		  }
//    	void display()
//    	{
//    		
//		}	
	};
	int main()
	{	
	
 	int num[5];
		setarray add;
		cout<<"Enter value in array:\n";

		for(int i=0;i<5;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<5;i++)
		{
			add.array(num);
		}
		add.array(num);
		add.getSum();
	
		return 0;
	}
