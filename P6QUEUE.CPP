#include<iostream.h>
#include<conio.h>
class queue
{
  int q[10],r,f,n,x;
 public:
  queue()
  {
   f=r=0;
   n=5;
  }
  void ins();
  void del();
  void disp();
};
void queue :: ins()
{
 if(r==5)
 {
  cout<<"overflow";
 }
 else
 {
 cout<<"enter new x : ";
 cin>>x;
 q[++r]=x;
 if(f==0)
 f++;
 }
}

void queue :: del()
{
 if(f==0)
 {
 cout<<"\nunderflow";
 return;
 }
 else
 {
  x=q[f];
  if(f==r)
  {f=r=0;
  cout<<"deleted x : "<<x;
  }else
  {cout<<"deleted x: "<<x;}
  f++;

 }
}
void queue :: disp()
{
 cout<<"\nqueue : \t";
 for(int i=f;i<=r;i++)
 cout<<q[i]<<"\t";
}
void main()
{
 clrscr();
 queue  q;
 q.ins();
 q.disp();
 q.del();
 q.disp();
 getch();
}
