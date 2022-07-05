#include<iostream.h>
#include<conio.h>
#include<string.h>
class convert
{
  char infix[20],postfix[20],s[20];
  int i,p,top;
 public:
  convert()
  {
   top=-1;
   i=p=0;
   cout<<"Enter infix expression : ";
   cin>>infix;
   strcat(infix,")");
   s[++top]='(';
  }
  int preced(char);
  void post();
  void disp();
};
int convert :: preced(char ch)
{
 switch(ch)
 {
  case '^':
	 return 3;
  case '*':
  case '/':
	 return 2;
  case '+':
  case '-':
	 return 1;
  default:
	return 0;
 }
}

void convert :: post()
{
 char ch;
 while(top!=-1)
 {
  ch=infix[i++];
  if( (ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='1'&&ch<='9') )
  {
    postfix[p++] = ch ;
  }
  else if( ch == '(' )
  {
    s[top++] = ch;
  }
  else if ( ch == ')' )
  {
   while( s[top] != '(' )
   postfix[p++] = s[top--];
   top--;
  }
  else if( (ch == '+' )||(ch == '-' )||(ch == '*') ||(ch == '/') ||(ch == '^') )
  {
   while( preced(ch) <=  preced(s[top]) )
   postfix[p++] = s[top--];
   s[++top]=ch;
  }
  else
  cout<<"wrong string ";
 }
 postfix[p]='\0';
}

void convert :: disp()
{
 cout<<"\nInfix   : "<<infix;
 cout<<"\nPostfix : "<<postfix;
 cout<<"\nStack   : "<<s[top];
}

void main()
{
 clrscr();
 convert c;
 c.post();
 c.disp();
 getch();
}