#include<iostream.h>
#include<conio.h>
#include<process.h>
class stack
{
  int s[10],i,top,x; // i is index for top-i+1 peep change
  public:
  stack()
  {
   top=-1;
  }
  void disp();
  void push();
  int pop();
  int peep();
  void change();
};
void stack :: push()
{
 if(top > 5)
 cout<<"\noverflow";
 else
 cout<<"\nEnter ele x : ";
 cin>>x;
 s[++top]=x;
}
int stack :: pop()
{
 if(top == -1)
 {
  cout<<"\nunderflow";
  return 0;
 }
 else
 return s[top--];
}
int stack :: peep()
{
 cout<<"\nenter index";
 cin>>i;
 if(top-i+1 <= -1)
 { cout<<"\nunderflow";
   return 0;
 }
 else
  return (s[top-i+1]);
}
void stack :: change()
{
 cout<<"\nenter index : ";
 cin>>i;
 if(top-i+1 <= -1)
 {
  cout<<"\nunderflow";
 }
 else
 {
  cout<<"\nenter new x : ";
  s[top-i+1]=x;
 }
}
void stack :: disp()
{
 cout<<"\nStack : \n";
 for(i=top;i>=0;i--)
  cout<<s[i]<<"\n";
}
void main()
{
 clrscr();
 stack s;
 int ch;
 while(1)
 {
  cout<<"\n1.push\t2.pop\t2.pop\t3.peep\t4.change\t5.disp\t0 to exit\n";
  cin>>ch;
  switch(ch!=0)
  {
   case 1: s.push(); break;
   case 2: s.pop(); break;
   case 3: s.peep(); break;
   case 4: s.change(); break;
   case 5: s.disp(); break;
   case 0: exit(0); break;
   default: break;
  }
 }
}