//functiom overloading
#include<iostream>
using namespace std;
int gett(int x)
{
 return x*x;
}
float gett(float y)
{
	return y*y;
}
int main()
{
	int r=gett(5);
	float f=gett(5.5f);
	cout<<"int"<<r<<endl;
	cout<<"f"<<f;
}