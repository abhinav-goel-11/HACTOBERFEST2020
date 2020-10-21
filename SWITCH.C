#include<conio.h>
#include<stdio.h>

void main()
{
int choice,x,y,s;
while(1)
{

clrscr();
 printf("\n1. addition of 2 numbers");
 printf("\n2. to print n numbers");
 printf("\n3. to check odd and even number");
 printf("\n4. to exit");
 printf("\nenter your choice here: ");
  scanf("%d",&choice);
   switch(choice)
    {
    case 1:
       printf("enter 2 numbers here");
       scanf("%d %d",&x,&y);
       printf("sum of %d and %d is %d",x,y,x+y);
       break;
    case 2:
       printf("enter your number here :");
       scanf("%d",&y);
       for(x=1;x<=y;x++)
       printf(" %d",x);
       break;
    case 3:
       printf("enter a number");
       scanf("%d",&x);
       x%2==0?printf("even number"):printf("odd number");
       break;
    case 4:
       exit(0);
    default: printf("invalid choice");
     }
     getch();
     }
}