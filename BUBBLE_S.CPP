/* last element gets proper pos in each exchanges in pass
   if exchanges == 0 then arr is sorted
  12.Perform Bubble sort

  it requires atmost n-1 passes
  time complexity : 	space : o(1)
  avg   : o(n^2)
  best  : o(n)
  worst : o(n^2)
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{
  int arr[10],n,x;
  public:
  void get();
  void sort();
  void disp();
};
void demo :: get()
{
 cout<<"\nEnter size : ";
 cin>>n;
 for(int i=1;i<=n;i++)
 cin>>arr[i];
}
void demo :: disp()
{
 for(int i=1;i<=n;i++)
 cout<<"\t"<<arr[i];
}
void demo :: sort()
{
 cout<<"\nAfter sorting\n";
 int exch=0,last=n;
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=last-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    int temp;
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
   }
   exch+=1;
  }
 }
 if(exch==0)
 return;
 else
 last-=1;
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