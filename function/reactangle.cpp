#include<iostream>
using namespace std;
class rectangle {
		int hight,brigdth,total;
	public:
		void setval(int len,int width) {
			hight=len;
			brigdth=width;
		}
		void show() {
			total=hight*brigdth;
			cout<<total;
		}
};
int main() {
	int len,width;
	cout<<"enter the lenth and rdius";
	cin>>len>>width;
		rectangle r;
	r.setval(len,width);
	r.show();
}
