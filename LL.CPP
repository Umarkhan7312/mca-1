#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
    int info,x;
    node *link;
   public:
    void get();
    void del();
    void disp();
    void search();
    void reverse();
    void sort();
    void sum();
};

node *start = NULL, *next , *temp ;

void node :: get()
{
 cout<<"\nenter x : ";
 cin>>x;
  node *n1 = new node;
 n1 -> link = NULL;
 n1 -> info = x;
 if( start == NULL)
    start = n1;
 else
 {
  next = start;
  while( next -> link != NULL)
	 next = next -> link;
  next -> link = n1;
 }
}
void node :: disp()
{
  int sum=0;
  temp = start;
  cout<<"\n LL : ";
	while( temp != NULL )
	{

	  cout<<"\t"<<temp->info;
	  sum+=temp->info;
	  temp = temp-> link ;
	}
	cout<<"\nSum :"<<sum;
}
void node :: del()
{
 temp = start ;
  if( temp != NULL )
  {
    temp = temp -> link ;
    start = temp ;
  }
  else
    cout<<"\n Empty LL";
}

void node :: search()
{
 int cnt=0, flag=0 , pos;
 cout<<"\n search :";
 cin>>x;
 temp=start;
 while(temp != NULL)
	{
	 cnt++;
	 if(temp -> info == x)
	  {
	    flag=1;
	    pos=cnt;
	    break;
	  }
	  temp = temp -> link ;
	}
	if(flag==1)
	  cout<<"\n Found at pos :"<<pos;
	else
	  cout<<"\n Not Found";
}



void main()
{
 clrscr();
  node n;
  for(int i=0;i<5;i++)
	n.get();
  n.disp();
  n.del();
  n.disp();
  n.search();
 getch();
}