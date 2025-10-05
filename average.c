// program to calculate the average of marks of five subjects

#include<stdio.h>
#include<math.h>

int main(){

    int s1,s2,s3,s4,s5, sum;
    float avg;

    printf("Enter the marks of five subjects:\n");   // input marks of five subjects
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    sum= s1+s2+s3+s4+s5; // calculating total marks and assigning it to sum variable
        printf("Total marks in 5 subjects: %d\n",sum);    // printing the total marks of five subjects


    avg=sum/5.0; // calculating average
      printf("percentage of 5 subjects: %.2f",avg);  // printing the percentage of 5 subjects

    return 0;


}
