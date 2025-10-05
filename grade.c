// program to find the grade of a student based on percentage

#include<stdio.h>

int main()      // main function
{

    int pc;
    printf("Enter the percentage:\n");   // input percentage
    scanf("%d",&pc);


    if(pc<0 && pc>100)                // condition to check if the percentage is valid or not
       printf("Invalid choice\n");
    else if(pc>90 && pc<=100)
       printf("A+ grade \n");
    else if(pc>80 && pc<=90)
       printf("A grade \n");
    else if(pc>70 && pc<=80)
       printf("B+ grade \n");
    else if(pc>60 && pc<=70)
       printf("B grade \n");
    else if(pc>50 && pc<=60)
       printf("C grade \n");
    else if(pc>33 && pc<=50)
       printf("D grade \n");
    else
       printf("F grade\n");


    return 0;

}
