/*
 *
 *
 */
#include<iostream.h>
#include<conio.h>
class demo
{
  int arr[10],n,x;
  public:
  void get();
  void disp();
  void sort();
  void swap(int,int);
};
void demo :: swap(int i,int j)
{
  int temp;
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
void demo :: get()
{
 cout<<"\nEnter size : ";
 cin>>n;
 cout<<"\nEnter x : ";
 for(int i=0;i<n;i++)
 cin>>arr[i];
}
void demo :: sort()
{
 int last=n;
 cout<<"\nAfter Sorting\n";
 for(int i=0;i<n;i++)
 {
  int exch=0;
  for(int j=0;j<last-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    swap(j,j+1);
   }
   exch++;
  }
  if(exch==0)
  return;
  else
  last-=1;
 }
}
void demo :: disp()
{
 cout<<"\nArr :\n";
 for(int i=0;i<n;i++)
 cout<<"\t"<<arr[i];
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