#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
node *link;
};
class stack
{
node *top;
public:
stack()
{
top=NULL;
}
void push(int);
void pop();
void dis();
~stack();
};
void stack::push(int num)
{
node *temp=new node;
if(temp==NULL)
cout<<"memory cant be allocate";
else
{
temp->data=num;
temp->link=top;
top=temp;
}
}
void stack::pop()
{
//node *temp=top;
if(top==NULL)
cout<<"stack is empty";
else
{
node *temp=top;
cout<<"delete"<<top->data;
top=top->link;
delete temp;
}
}
void stack::dis()
{
if(top==NULL)
cout<<"stack is empty";
else
{
while(top!=NULL)
{
cout<<" "<<top->data;
top=top->link;
}
}
}
void stack::~stack()
{
while(top!=NULL)
{
node *t=top;
top=top->link;
delete t;
}
}
void main()
{
int ch;
clrscr();
stack s;
cout<<"push\n pop\n dis\n exit\n ";
 while(1)
{

 cout<<"enter the ch";
 cin>>ch;
 switch(ch)
 {
 case 1:s.push(7);
 break;
 case 2:s.pop();
 break;
 case 3:s.dis();
 break;
 case 4:exit(0);
 break;
 default:
 cout<<"again enter ";
 cin>>ch;
 }
}
getch();
}