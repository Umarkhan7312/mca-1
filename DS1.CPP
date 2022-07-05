// 7.Perfom insert,delete,display,search,sum and sort on LL

#include<iostream.h>
#include<conio.h>
#include<process.h>

class demo
{
   int arr[10],n,x;
  public:
   void get();
   void ins();
   void del();
   void disp();
   void sum();
   void search();
   void sort();
};

void demo :: get()
{
 cout<<"enter size : ";
  cin>>n;
 for(int i=0;i<n;i++)
 {
   cout<<"arr["<<i<<"] :";
   cin>>arr[i];
 }
}
void demo :: disp()
{
 for(int i=0;i<n;i++)
  cout<<"\narr["<<i<<"] : "<<arr[i];
}


void demo :: sum()
{
 int sum=0;
 for(int i=0;i<n;i++)
     sum += arr[i];
 cout<<"\nsum : "<<sum;
}
void demo :: search()
{
 cout<<"\n search x : ";
 cin>>x;
 for(int i=0;i<n;i++)
 {
  if(arr[i] == x)
  {
   cout<<"\nFound at : "<<i;
   return;
  }
 }
 cout<<"\nNot found";
}

void main()
{
 clrscr();
 demo d;
 d.get();
 d.disp();
 d.sum();
 d.search();
 getch();
}