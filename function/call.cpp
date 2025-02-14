#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"integer"<<a+b;
}
void add(float a, float b)
{
	cout<<"float"<<a+b;
}
int main()
{
	add(5.1f,5.2f);
	add(3,5);
}