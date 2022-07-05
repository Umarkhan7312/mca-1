#include<iostream.h>
#include<conio.h>
class demo
{
 int a[5][5],b[5][5],c[5][5],d[5][5],e[5][5];
 int n,m,p,q,i,j;
 public:
 void get();
 void add();
 void sub();
 void mul();
};

void demo :: get()
{
 cout<<"\nMATRIX A : ";
 cin>>n>>m;
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   cin>>a[i][j];
 }

 cout<<"\nMATRIX B : ";
 cin>>p>>q;
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
   cin>>b[i][j];
 }
}

void demo :: add()
{
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
   {
     c[i][j]=a[i][j] + b[i][j];
   }
 }
 cout<<"\nAddition is : \n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
     cout<<c[i][j]<<"\t";
     cout<<endl;
 }
}

void demo :: sub()
{
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
   {
     d[i][j]=a[i][j] - b[i][j];
   }
 }
 cout<<"\nSubstraction is : \n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
     cout<<d[i][j]<<"\t";
     cout<<endl;
 }
}

void demo :: mul()
{
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
   {
     e[i][j]=a[i][j] * b[i][j];
   }
 }
 cout<<"\nMultiplicationc is : \n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
     cout<<e[i][j]<<"\t";
     cout<<endl;
 }
}


void main()
{
 clrscr();
 demo d;
 d.get();
 d.add();
 d.sub();
 d.mul();
 getch();
}