// program to find the largest of three numbers

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the Numbers:\n");   // input three numbers
    scanf("%d%d%d",&a,&b,&c);


    // condition to check which number is largest by using nested if-else
    if(a>b)             
    {   if(a>c)
        {
           printf("%d is largest",a);
        }
        else
        {
            printf("%d is largest",c);
        }
    }
    else
    {
        if(b>c)
        {
        printf("%d is largest",b);
        }
        else 
        {
         printf("%d is largest",c);
        }
    }




    return 0;   // return statement executed successfully when program ends without any error
}
