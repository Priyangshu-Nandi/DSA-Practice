#include <stdio.h>
int main()
{
    int i, j, min, temp;
    int arr[] = {50, 12, 34, 5, 8};
    int n = 5;

    for (int i = 0; i < n - 1; i++)  //SELECTION SORT   
    {
        min = i; // Assumes that 1st element(i) of the unsorted part is smallest

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            
        }
   
        
    if (min != i)
    {
        //  swap(&arr[ min ], &arr[i]);
        temp = arr[min]; 
        arr[min] = arr[i];
        arr[i] = temp;
    }
    }
    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
