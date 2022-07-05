// 9.Perform deletion on LL according to postion

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
   void del_info();
   void del_link();
};
node *start,*next , *temp;

void node :: del_link()
{
 int flag=0;
 int pos,c=0;
 node* p;

 cout<<"\nEnter pos : ";
 cin>>pos;

 if(start == NULL)
   cout<<"\nEmpty LL";
 if(pos == 1)
 {
  start = start -> link;
  flag=1;
 }
 temp=start;
 while(temp != NULL)
 {
  c++;
  p=temp;
  temp=temp->link;
  if(c==pos-1)
  {
   p->link = temp ->link;
   flag=1;
  }
 }
 if(flag==0)
  cout<<"\nNot found";
}
void node :: del_info()
{
 int flag=0;
 node *p;
 cout<<"\ninfo : ";
 cin>>x;

 if(start == NULL)
   cout<<"\nLL is empty";
 if(start -> info == x)
 {
  start = start -> link;
  flag=1;
 }
 temp = start;
 while(temp != NULL)
 {
  p=temp;
  temp = temp -> link;
  if(temp -> info == x)
  {
   p->link = temp->link;
   flag=1;
  }
 }
 if(flag==0)
  cout<<"\nele not found ";
}

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


void main()
{
 clrscr();
 node n;
 for(int i=1;i<=5;i++)
	 n.get();
 n.disp();
 n.del_info();
 n.disp();
 n.del_link();
 n.disp();
 getch();
}