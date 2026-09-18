#include <stdio.h>
int main()
{
    int i, j, min, temp;
    int arr[] = {50, 12, 34, 5, 8};
    int n = 5;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
           if (arr[j] > arr[j + 1])
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        
    }
    }

     printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}