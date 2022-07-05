#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[5],i,search,index;
 for(i=0;i<=4;i++)
  cin>>arr[i];
 for(i=0;i<5;i++)
  cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
 cout<<"\nsearch ele : ";
 cin>>search;

 for(i=0;i<5;i++)
 {
  if(arr[i]==search)
  {
   index = i;
   break;
  }
 }
 cout<<endl<<search<<" at  Index : "<<index;
 getch();
}