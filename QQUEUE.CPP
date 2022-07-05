#include<iostream.h>
#include<conio.h>
class queue
{
 int q[10],r,f,x;
 public:
 queue()
 {
  f=r=-1;
 }
 void  ins();
 void  del();
 void disp();
};
void queue :: ins()
{
 cout<<"\nEnter x : ";
 cin>>x;
 if(r>=2)
 cout<<"overflow";
 else
 {
  if(f==-1)
     f++;
  r++;
  q[r]=x;
 }
}
void queue :: del()
{
 if(f==-1)
 cout<<"\nUnderflow";
 else
 {
  cout<<"\ndel   : "<<q[f];
  f++;
 }
}
void queue :: disp()
{
 if(f==-1)
 cout<<"\nunderflow";
 else
 {
 cout<<"\nQueue :";
 for(int i=f;i<=r;i++)
 cout<<"\t"<<q[i];
 }
}
void main()
{
 clrscr();
 queue q;
 q.disp();
 for(int i=0;i<4;i++)
   q.ins();
 q.disp();
 q.del();
 q.disp();
 getch();
}