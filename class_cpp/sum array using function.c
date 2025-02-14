#include<iostream>
   using namespace std;
   class array
   {
   	int sum=0,*a;
   	public:
   		void setarray(int b[])
   		{
   			a=b;
		}
		void getSum()
		{    sum=0;
			for(int i=0;i<5;i++)
			{
				sum=sum+a[i];
			}
			cout<<"Sum of array: "<<sum;
		}
   };
   int main()
   {
   	int m[5];
   	array k;
   	cout<<"Enter value in array:\n";
   	for(int i=0;i<5;i++)
   	{
   		cin>>m[i];
	 }
	 k.getSum(m);
	 return 0;
   }