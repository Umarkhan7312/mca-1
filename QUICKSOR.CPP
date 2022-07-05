#include<iostream.h>
#include<conio.h>
#include<string.h>
class demo
{
 int a[10],n;
 public:
 void get();
 void disp();
 int part(int,int);
 void asort(int,int);
};
void demo :: get()
{
 cout<<"\nEnter size : ";
  cin>>n;
 for(int i=0;i<n;i++)
  cin>>a[i];
  asort(1,n);
}
void demo :: asort(int lb , int ub)
{
 if(lb<ub)
 {
  int j = part(lb,ub);
  asort(lb,j-1);
  asort(j+1,ub+1);
 }
}
int demo :: part(int lb ,int ub)
{
 int k = a[lb];
 int i = lb;
 int j = ub-1;
	do
	{
	 while(a[i]<k)
	 i++;
	 while(a[j]>k)
	 j--;
	 if(i<j)
	 {
	  int temp = a[i];
	  a[i] = a[j];
	  a[j] = temp;
	 }
	}while(i<j);
	a[lb] = a[j];
	a[j] = k;
 return j;
}
void demo :: disp()
{
 cout<<"\n\t";
 for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
 clrscr();
 demo d;
 d.get();
 cout<<"\nAfter Sorting : ";
 d.disp();
 getch();
}
