#include<iostream.h>
#include<conio.h>
#include<process.h>
class stack
{
  int s[10],top,x;
  public:
  stack()
  {
   top=-1;
  }
  void push();
  void pop();
  void peep();
  void change();
  void disp();
};
void stack::push()
{
 if(top==4)
  cout<<"\nOverflow";
 else
 {
  cout<<"\nEnter ele : ";
  cin>>x;
  s[++top]=x;
 }
}
void stack :: pop()
{
 if(top==-1)
  cout<<"\nUnderflow";
 else
  cout<<"\npop : "<<s[top];
  top--;
}
void stack :: disp()
{
 cout<<"\nStack :";
 for(int i=top;i>=0;i--)
 cout<<"\n"<<top-i+1<<" : "<<s[i];
}
void stack :: peep()
{
 int i;
 cout<<"\nEnter i :";
 cin>>i;
 cout<<"enter x : ";
 cin>>x;
 if(s[top-i+1]<0)
 cout<<"\nNot found";
 else
 cout<<i<<" : "<<s[top-i+1];
 s[top-i+1]=x;
}
void main()
{
 clrscr();
 stack s;
 for(int i=0;i<4;i++)
   s.push();
 s.disp();
 s.pop();
 cout<<"\nAfter pop";
 s.disp();
 s.peep();
 s.disp();
 getch();
}