#include<iostream.h>
#include<conio.h>
class demo
{
 int arr[10],n,x;
 public:
 void get();
 void disp();
 void sort();
};
void demo :: get()
{
 cout<<"enter size : ";
 cin>>n;
 for(int i=0;i<n;i++)
 cin>>arr[i];
}
void demo :: disp()
{
 cout<<"arr :";
 for(int i=0;i<n;i++)
 cout<<"\t"<<arr[i];
}

void demo ::sort()
{
 cout<<"\nAfter sorting\n";
 int min;
 for(int i=0;i<n-1;i++)
 {
  min=i;
  for(int j=i+1;j<n;j++)
  {
   if(arr[j] < arr[min])
    min=j;
  }
  if(min!=i)
  {
   int temp=arr[min];
   arr[min]=arr[i];
   arr[i]=temp;
  }
 }
}

void main()
{
 clrscr();
 demo d;
 d.get();
 d.disp();
 d.sort();
 d.disp();
 getch();
}

