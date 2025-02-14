#include<iostream>
using namespace std;
class  student
{
	private:
		int rno;
		char name[20];
		int id;
	public:
	student(int no1,char name1[],int id1 )
	{
		rno=no1;
		name=name1;
		id=id1;
	}
};
int main()
{
	student(1,"hats",23);
	
}