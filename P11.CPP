// 11.Implement Reverse LL

#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
  int info,x;
  node *link;
  public:
  void get();
  void disp();
  void reverse();
};

node *start=NULL,*next,*temp;

void node :: get()
{
 cout<<"\nEnter new node info : ";
 cin>>x;
 node *n1 = new node;
 n1 -> link = NULL;
 n1 -> info = x;
  if(start == NULL)
   { start = n1;}
  else
  {
   next = start;
   while(next -> link != NULL)
	 next = next -> link;
	 next -> link = n1;
   }
}

void node :: disp()
{
 node *i;
 i=start;
 cout<<"\nLL :";
 while(i != NULL)
      {
       cout<<"\t"<<i -> info;
       i = i->link;
      }
}

void node :: reverse()
{
 node *t,*t1,*t2;
 t =start;
 t1=start->link;
 t2= t1  ->link;
 t->link = NULL;
 while(t1!=NULL)
  {
   t1->link = t;
   t =t1;
   t1=t2;
   t2=t2->link;
  }
 start=t;
 cout<<"\nReverse LL :";
 disp();
}
void main()
{
 clrscr();
 node n;
 for(int i=0;i<5;i++)
 {     n.get();     }
 n.disp();
 n.reverse();
 getch();
}