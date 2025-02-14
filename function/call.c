#include<iostram.h>
void add(int a,int b)
{
	cout<<a+b;
}
void add(float a, float b)
{
	cout<<a+b;
}
int main()
{
	add(5.1,5.2);
	add(3,5);
}