#include<iostream.h>
#include<conio.h>
#include<process.h>
class cq
{
  int q[10],f,r,x;
  public:
  cq()
  {
   f=r=-1;
  }
  void ins();
  void del();
  void dis();
};
void cq::ins()
{
 if( (f==0)&&(r==2) || f==r+1 )
   cout<<"\nOverflow";
 else
 {
  if(r==2)
     r=-1;
  if(f==-1)
     f=0;
  cout<<"\nEnter x : ";
  cin>>x;
  q[++r]=x;
 }
}

void cq::del()
{
 if(f==-1)
    cout<<"\nUnderflow";
 else
 {
  cout<<"\nDel : "<<q[f];
  if(f==r)
   f=r=-1;
  else
  {
   if(r==3)
   {
    r=-1;
   }
   else
      f++;
  }
 }
}

void cq :: dis()
{
 if(f==-1)
  cout<<"\nUnderflow";
 else
 {
  cout<<"\nCQ : \n";
  if(f<=r)
 {
   for(int i=f;i<=r;i++)
   cout<<"\t"<<q[i];
 }
  else
  {
   for(int j=f;j<2;j++)
    cout<<"\t"<<q[j];
   for(int i=0;i<r;i++)
    cout<<"\t"<<q[i];
   for(int k=r;k<f;k++)
    cout<<"\t"<<q[k];
  }
 }
}
void main()
{
 clrscr();
 cq c;
 int ch;
 do
 {
  cout<<"\nEnter ch: 1/2/3 or 0 to exit\n";
  cin>>ch;
  switch(ch)
  {
   case 1: c.ins(); break;
   case 2: c.del(); break;
   case 3: c.dis(); break;
   case 0: exit(0);
   default: cout<<"\nWrong"; break;
  }
 }while(ch!=0);
}