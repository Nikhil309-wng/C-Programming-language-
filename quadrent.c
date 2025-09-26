#include<stdio.h>

int main(){

    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);


    if(x>0 && y>0)
      printf("1st quadrent\n");
    else if(x<0 && y>0)
      printf("2nd quadrent\n");
    else if(x<0 && y<0)
      printf("3nd quadrent\n");
    else if(x>0 && y<0)
      printf("4nd quadrent\n");
    else
       printf("Origin\n");

      return 0; 

}