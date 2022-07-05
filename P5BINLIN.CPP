#include<iostream.h>
#include<conio.h>
class demo
{
   int arr[5],n;
  public:
   void get();
   void sort();
   void linear();
   void binary();
   void disp();
};

void demo :: get()
{
 cout<<"array sz : ";
 cin>>n;
 for(int i=0;i<n;i++)
 cin>>arr[i];
}

void demo :: sort()
{
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-1;j++)
  {
   if(arr[j+1] < arr[j])
   {
   int temp;
   temp = arr[j];
   arr[j] = arr[j+1];
   arr[j+1] = temp;
   }
  }
 }
}
void demo :: linear()
{
 int x,f;
 f=0;
 cout<<"\nnEnter x : ";
 cin>>x;
 for(int i=0;i<n;i++)
 {
  if(arr[i]==x)
  {
   f=1;
   cout<<"\nsearch successful";
   return;
  }
 }
 if(f==0)
  cout<<"\nunsuccessful";
}
void demo :: disp()
{
 for(int i=0;i<n;i++)
 {cout<<arr[i]<<"\t";}
 cout<<endl;
}

void demo :: binary()
{
 int x,f,l,h,mid;
 l=0;
 f=0;
 h=n;
 cout<<"\nenter x :";
 cin>>x;
 while(l<=h)
 {
  mid=(l+h)/2;
  if(arr[mid]==x)
  {
   f=1;
   cout<<"\nsuccessful";
   return;
  }
  else if(arr[mid]<x)
	l=mid+1;
  else if(arr[mid]>x)
	h=mid-1;
 }
  if(f==0)
  cout<<"\nUnsuccessful";

}

void main()
{
 clrscr();
 demo d;
 d.get();
 d.disp();
 d.sort();
 d.disp();
 d.linear();
 d.binary();
 getch();
}