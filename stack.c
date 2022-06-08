#include<stdio.h>
#include<stdlib.h>		
#define n 5
int top=-1;
int stack[n];
void push(int val)
 {
 	top++;
 	stack[top]=val;
 	printf("\n%dpushed" ,stack[top]);
 }
void pop()
 {
	printf("\n%d POPPED\n" ,stack[top]);
	stack[top]=-1;
	top--;
 }

int isfull()
{ 
 	if (top==n-1)
 	return 1;
 	else
 	return 0;
 }
 int isempty()
 {
  if(top==-1)
  return 1;
  else
  return 0;
 }
  void findtop()
  {
   	printf("top posn is %d" ,top+1);
   	printf("\ntop value %d" , stack[top]);
  }
 void display()
 {
 	int i,x;
 	x=top;
 	for(i=x;i>=0;i--)
 	printf("\n%d\n" ,stack[i]);
 }
 void main()
 {
  int ch,val; 
  while(1)
  {
  printf("MENU: 1.PUSH\n2.POP\n3.FIND TOP\n4.DISPLAY\n\nENTER YOUR CHOICE ");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  {
   	if(isfull())
 	{
 		printf("\nOVERFLOW");
 	}
 	else
 	{
 	 printf("Enter Value");
 	 scanf("%d",&val);
 	 push(val);
 	}
         break;
        }
 case 2:
 { 
  if (isempty())
	{
	printf("UNDERFLOW");
	}
   else
  
         pop();
  
   break;
  }
 case 3:
 {
  	findtop();
  	break;
  }
  case 4:
  {
   	display();
   	break;
   }
  default:
  {
   printf("invalid choice");
   exit(0);
  }
 }
 }
 }
 
 
  	
 	 
  
  		
