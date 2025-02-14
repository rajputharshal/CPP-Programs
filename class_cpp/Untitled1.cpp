#include<iostream>
#include<string>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5};
int *ptr=arr;
ptr+=3;
printf("%d",*ptr);
}
