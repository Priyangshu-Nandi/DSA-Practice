#include <stdio.h>
int main()
{
    int i, j, temp;
    int arr[] = {1, 12, 7, 5, 8,3,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(i=0; i< n-1 ; i++){

        j=i;   

        while (j >= 0 && arr[j]> arr[j+1]){
              
               temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                j--;
        }
    }

       printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}