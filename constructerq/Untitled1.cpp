#include<iostream>
#include<string.h>
using namespace std;
class student
{
   private:
   int rno;
   char name[20];
   int per;
   public :
   student(int rno,char name[],int per)
   {
   	  this->rno=rno;
   	  strcpy(this->name,name);
   	  this->per=per;
   }   
   
   void show()
   {
   	  cout<<rno<<"\t"<<name<<"\n"<<per<<"\n";
   }	
};
int main()
{
	student s(11,"harsh",55);
	s.show();
}
	