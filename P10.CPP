// 10. Perform sort on LL

#include<iostream.h>
#include<conio.h>
#include<process.h>

class node
{
  int info,x;
  node* link;
  public:
  void get();
  void disp();
  void sort();
};

node *start = NULL, *next , *temp;
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
void node :: sort()
{
 node *t;
 int sz; // to get current sz of LL
 t=start;
 while(t -> link != NULL)
 {
  sz++;
  t = t -> link;
 }
 for(int i=1;i<=sz;i++)
  for( t=start ;t->link != NULL ;t = t->link)
    if( (t->info) > (t->link)->info )
      {
	int temp;
	temp = t -> info;
	t->info = (t->link)->info;
	(t->link)->info = temp;
      }
 cout<<"\n After sorting :";
 disp();
}

void main()
{
 clrscr();
 node n;
 for(int i=0;i<5;i++)
 n.get();
 n.disp();
 n.sort();
 getch();
}