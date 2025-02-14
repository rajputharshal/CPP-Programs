#include<stdio.h>
int main()
{
int a=1,b=2,c=3;
printf("%u\n",&a);
int *ptr1=&a;
printf("%u\n",ptr1);
int **sptr=&ptr1;
printf("%d",sptr);
}
