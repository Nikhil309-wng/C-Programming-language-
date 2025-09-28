<<<<<<< HEAD
// program to check whether number is armstrong or not using command line argument
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int n , d, m , sum = 0;
n = atoi(argv[1]);
m = n;
while (m > 0)
{
    d = m % 10;
    sum = sum + (d * d * d);
    m = m / 10;

}
if (sum == n)
    printf("%d is an Armstrong number\n", n);
else
    printf("%d is not an Armstrong number\n", n);

  return 0;
=======
// program to check whether number is armstrong or not using command line argument
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int n , d, m , sum = 0;
n = atoi(argv[1]);
m = n;
while (m > 0)
{
    d = m % 10;
    sum = sum + (d * d * d);
    m = m / 10;

}
if (sum == n)
    printf("%d is an Armstrong number\n", n);
else
    printf("%d is not an Armstrong number\n", n);

  return 0;
>>>>>>> fd80d7603ca5d416879753ff2f0d63bad77eb8ad
}