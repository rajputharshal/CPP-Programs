#include<iostream>
#include<conio.h>
using namespace std;
int gets(int r)
{
	return r*r;
}
float gets(float f)
{
	return f*f;
}
int main()
{
	int r=gets(4);
	float f=gets(5.5f);
	cout<<r;
	cout<<"\n"<<f;
}
