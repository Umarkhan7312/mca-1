// 7.Perform insertion,deletion,display,sum,sorting and searching on LL
#include<iostream.h>
#include<conio.h>
class node
{
  int info,x;
  node *link;
  public:
  void get();
  void del();
  void sum();
  void search();
  void disp();
};

node *next,*start = NULL,*temp;

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

void node :: del()
{
 temp = start;
 if(temp!=NULL)
 {
  temp = temp -> link;
  start = temp;
 }
 else
  {
    cout<<"\nLL is empty";
  }
}

void node :: sum()
{
 node *x;
 x=start;
 int sum=0;
 while(x!=NULL)
  {
   sum=sum+x->info;
	x=x->link;
  }
cout<<"\nSum : "<<sum;
}

void node :: search()
{
 int c=0,f=0;
 cout<<"search : ";
  cin>>x;
 temp=start;
while(temp!=NULL)
{
 c++;
 if(temp->info==x)
{
f=1;
cout<<"ele found at :"<<c;
return;
}
temp=temp->link;
}
if(f==0)
cout<<"not found";
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
 int ch;
 do
 {
  cout<<"\n1.ins\t2.del\t3.disp\t4.search\t5.sort\t6.sum\t0.exit\n";
  cout<<"\nEnter ch : ";
  cin>>ch;
  switch(ch)
  {
   case 1: n.get();  break;
   case 2: n.del();  break;
   case 3: n.disp(); break;
  case 4: n.search();break;
   case 5: n.sort(); break;
   case 6: n.sum(); break;
   case 0: exit(0);
   defaul: break;
  }
 }while(ch!=0);
}