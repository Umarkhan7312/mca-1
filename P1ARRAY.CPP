#include<iostream.h>
#include<conio.h>
#include<process.h>

class demo
{
  int arr[10],n;
  public:
  void get();
  void disp();
  void ins();
  void del();
};

void demo :: del()
{
 int i,index;
 cout<<"\n enter index : ";
 cin>>index;
 while(i < n)
 {
  arr[i] = arr[i+1];
  i++;
 }
 n--;
}

void demo :: ins()
{
 int x,i,index;
 cout<<"\nEnter x : ";
 cin>>x;
 cout<<"\nIndex : ";
 cin>>index;
 i=n;
 while(i>=index)
 {
  arr[i++]=arr[i];
  i--;
 }
 arr[i]=x;
 n++;
}
void demo :: get()
{
 cout<<"\n Enter array size  : ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"arr["<<i<<"] : ";
  cin>>arr[i];
 }
}
void demo :: disp()
{
 cout<<"\n Array elements are  : \t";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<"\t";
}

void main()
{
 clrscr();
 demo d;
 d.get();
 d.disp();
 int ch;
 while(ch!=4)
 {
  cout<<"\n1.disp \t2.ins \t3.del \t4.exit";
  cout<<"\nEnter choice : ";
  cin>>ch;
  switch(ch)
  {
   case 1:
	d.disp();
	break;
   case 2:
	d.ins();
	break;
   case 3:
	d.del();
	break;
   case 4:
	exit(0);
	break;
   default:
	cout<<"\nwrong choice";
	break;

  }
 }
 getch();
}