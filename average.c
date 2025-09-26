#include<stdio.h>
#include<math.h>

int main(){

    int s1,s2,s3,s4,s5, sum;
    float avg;

    printf("Enter the marks of five subjects:\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum= s1+s2+s3+s4+s5;
    printf("Total marks in 5 subjects: %d\n",sum);
    avg=sum/5;
    printf("percentage of 5 subjects: %.2f",avg);

    return 0;


}
