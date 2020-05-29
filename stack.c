#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[size];
int top=-1;
int isempty();
int isfull();
void push();
void pop();
void display();
int main()
{
 int c;
 while(1)
 {
 printf("\nyour choices are\n1.isempty\n2.isfull\n3.push\n4.pop\n5.display\n6.exit\nenter your choice\n");
 scanf("%d",&c);
 switch(c)
 {
   case 1:
      if(isempty())
          printf("stack is empty\n");
     else
        printf("stack is not empty\n"); 
     break;
   case 2:
     if(isfull())
          printf("stack is full\n");
     else
        printf("stack is not full\n"); 
     break;
   case 3:
     if(isfull())
      printf("stack is full cannot add\n");
     else
      push();break;
   case 4:
      if(isempty())
        printf("stack is empty\n");
       else
         pop();break;
   case 5:
       if(isempty())
        printf("stack is empty\n");
       else
         display();break;
   case 6:exit(1);break;
   default:printf("\ninvalid option\n");
 }
 }
 return 0;
}

int isempty()
{
   if (top==-1)
    return 1;
   else
    return 0;
}
int isfull()
{
  if(top==(size-1))
  return 1;
  else
    return 0;
}
void push()
{
   int e;
     printf("\nenter the element to push\n");
     scanf("%d",&e);
     top++;
     a[top]=e;
  
}
void pop()
{
    int i;
       i=a[top];
       printf("\nthe element poped is\n");
       printf("%d",i);
       top--;
   
}
void display()
{ int i;
  printf("\n----the elementd in the stack are----\n");
  for(i=top;i>=0;i--)
  { 
     printf("%d ",a[i]);
    
  }
}












