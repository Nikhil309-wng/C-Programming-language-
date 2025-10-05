// Simple calculator program in C

#include<stdio.h>
#include<math.h>

int main(){
    
   int a,b,c,choice;

   printf("Enter two values:\n");   // input two numbers
   scanf("%d%d",&a,&b);

   printf("Enter your choice:\n");   // input choice of operation
   printf("enter 1 for addition:\n");
   printf("enter 2 for substration:\n");
   printf("enter 3 for multiplication:\n");
   printf("enter 4 for dividion:\n");
   printf("enter 5 for modulo division:\n");
   scanf("%d",&choice);

   switch (choice)    // switch case to perform operations based on user choice
   {
   case 1: 
        printf("Sum is %d", c=a+b);
    break;
    case 2: 
        printf("sub is %d", c=a-b);
    break;
    case 3: 
        printf("mul is %d", c=a*b);
    break;
    case 4: 
        printf("div is %d", c=a/b);
    break;
    case 5: 
        printf("modolu is %d", c=a%b);
    break;
    default:
       printf("INvalid choice\n");
    break;
   }
 

   return 0;
}