// 17.Perfom insert,delete,display,search,sum and sort on Array
// Linear Search and Binary Search

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
   void binary();
   void sort();
};

void demo :: binary()
{
 int x,l=0,m,h=n,flag=0;
 cout<<"\nsearch : ";
 cin>>x;
 while(l<=h)
 {
  m = (l+h)/2;
  if(arr[m]==x)
  {
   flag=1;
   cout<<"found "<<arr[m];
   return;
  }
  else if(arr[m]>x)
      l=m+1;
  else
      h=m-1;
 }
 if(flag==0)
  cout<<"\nNot found";
}
void demo :: sort()
{
 cout<<"sorted array : ";
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    int temp;
    temp = arr[j];
    arr[j] =arr[j+1];
    arr[j+1]=temp;
   }
  }
 }
}
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
 d.sort();
 d.disp();
 d.binary();
 getch();
}