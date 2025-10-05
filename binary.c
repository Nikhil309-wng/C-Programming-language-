// program to find an elemeny in an array using binary search

#include<stdio.h>

int main(){
      
         int i, e, n, f, l, mid, a[100];

            printf("Enter the number of elements: ");  // size of the array
            scanf("%d", &n);
            printf("Enter the elements in sorted order:\n");   // elements of the array in sorted order
            for(i=0; i<n; i++)
            {
                  scanf("%d", &a[i]);
            }
            printf("Enter the element to be searched: ");  // element to be searched
            scanf("%d", &e);
            f = 0;
            l = n - 1;


            while (f<=l)    
            {
              mid = (f + l) / 2;
              if (a[mid] == e)
              {
                  printf("Element found at position %d\n", mid + 1);
                  break;
              }
              else if (a[mid] < e)
              {
                  f = mid + 1;
              }
              else
              {
                  l = mid - 1;
              }
            }

            if(f > l)       // condition to check if the element is not found in the array
            {
                  printf("Element not found in the array\n");
            }

    return 0;
}