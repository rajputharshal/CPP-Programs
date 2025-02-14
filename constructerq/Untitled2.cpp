#include<iostream>
using namespace std;
class student
{
   private:
   int rno;
   char name[20];
   int per;
   student(int no,char name,int per)
   {
   	  this->rno;
   	  this->name;
   	  this->per;
   }
   int show()
   {
   	  cout<<rno<<"\t"<<name<<"\n"<<per<<"\n";
   }	
};
int main()
{
	student s(11,harsh,55)
	s.show();
}