#include<iostream>
using namespace std;
int main()
{
	void *ptr;
	int a=5;
	ptr=(int*)&a;
	cout<<&(int*)ptr;
}
