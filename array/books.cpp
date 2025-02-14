#include<iostream>
#include<string.h>
using namespace std;
class book
{
	int bid,i;
	char bname[20];
	char auther[20];
	int price;
	public:
		void setdata()
		{
			cin>>bid>>bname>>auther>>price;
		}
		void showdata()
		{
	       cout<<"\n"<<bid<<"\t"<<bname<<"\t"<<auther<<"\t"<<price<<"\n";			
		}
		int getid()
		{
			return bid;
		}
		char *getbname()
		{
			return bname;
		}
		char *getauther()
		{
			return auther;
		}
		int getprice()
		{
			return price;
		}
		
};
int main()
{
	int i,no,cs,size,count=0;
		char sc[20];
	cout<<"enter size of librery \n";
	cin>>size;
	book b[size];
    do
	{
			cout<<"1. press one add add boks\n";
			cout<<"2. press 2 show book details\n";
			cout<<"3. search books \n";
			cout<<"4. delet element by id";
			cout<<"enter what you want \n";
			cin>>no;
		switch(no)
		{
			case 1:
					cout<<"enter  book id book name book auther and price \n";
					for(int i=0;i<size;i++)
					{
						b[i].setdata();
					}
			break;
		    case 2:
		    	cout<<"All Data is:\n";
		    	  	for(i=0;i<size;i++)
			       {
						b[i].showdata();
					}
			break;
			case 3:
				cout<<"1.search book by id prass  \n";
				cout<<"2.search book ny name  \n";
				cout<<"3.search by auther ";
				cout<<"4. search book price ";
				int no2,id1;
				cout<<"press number \n";
				cin>>no2;
				switch(no2)
				{
					case 1:
						cout<<"enter search id \n";
						cin>>id1;
						for(i=0;i<size;i++)
						{
							if(id1==b[i].getid())
							{
								cout<<"book is found \n";
							}
							else
							 {
							 	cout<<"enter valid id\n";	
							 }
						}
					break;
					case 2:
						
						   int cmp;
						   cout<<"enter search book name";
						   cin>>sc;
							for(i=0;i<size;i++)
							{  
							   if(strcmp(sc,b[i].getbname())==0)
							   {
							   	 cout<<"book found\n";
							   	 b[i].showdata();
							   }
							   else
							   {
							   	cout<<"book is bot found\n";
							   }  						
							}	
					break;
			     	case 3:
				     	//	cout<"search by auther name"
						  char ath[20];		
						  cout<<"enter auther name\n";			  
						  cin>>ath;
						  for(i=0;i<size;i++)
						  {
						  	if(strcpy(ath,b[i].getauther())==0)
						  	{
						  	    cout<<"book is found\n";
								  b[i].showdata();	
							}
							else
							{
								cout<<"auther is not found\n";
							}
						  }
					break;
					case 4:
						int pp;
						cout<<"enter your price";
						cin>>pp;
						for(i=0;i<size;i++)
						{
							if(pp<=b[i].getprice())
							{
								cout<<"book is found";
								b[i].showdata();
							}
						}
					break;
					default:
						cout<<"SOMETHING INVALID \n";
				}
			break;
			case 4:
				cout<<"A.delete by id";
				cout<<"B.delete by name";
				char fd;
				cin>>fd;
				switch(fd)
				{
					case 'A':
							int did;
							cout<<"deleted id";
							cin>>did;
							for(i=0;i<size;i++)
							{
								if(did==b[i].getid())
								{ count++;
									for(int j=i;j<size;j++)
									{
										b[j]=b[j+1];
									}
								}
							}							
							for(i=0;i<size-count;i++)
							{
								cout<<"\n";
								b[i].showdata();
							}
					break;
					
					case 'B':
					     cout<<"Enter the name:\n";						
						cin>>sc;
						count=0;
						for(i=0;i<size;i++)
						{
							
							if(sc==b[i].getbname())
							{
								count++;
								for(int j=i;j<size;j++)
								{
				
									b[j]=b[i+1];
								}
							}
						}
							for(i=0;i<size-count;i++)
							{
								cout<<"\n";
								b[i].showdata();
							}
					break;	
				}								
		}
			cout<<"do you want to contineu press 1.\n";
    	cin>>cs;
	}while(cs==1);
	
}  
			   				
    
