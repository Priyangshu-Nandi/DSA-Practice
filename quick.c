#include <stdio.h>
void swap(int *a, int *b)
{

        int temp = *a;
        *a = *b;
        *b = temp;
}
int partition(int arr[], int st, int end)
{

        int i = st - 1, p = arr[end];
        for (int j = st; j < end; j++)
        {
                if (arr[j] <= p)
                {
                        i++;
                        swap(&arr[j], &arr[i]);
                }
        }
        i++;
        swap(&arr[end], &arr[i]);
        return i;
}
void Qs(int arr[], int st, int end)
{
        if (st < end)
        {

                int piv = partition(arr, st, end);
                Qs(arr, st, piv - 1);     //left half
                Qs(arr, piv + 1, end);    //right half
        }
}

int main()
{
        int arr[] = {12, 31, 35, 8, 32, 37};
        int n = sizeof(arr) / sizeof(arr[0]);
        Qs(arr, 0, n - 1);

        printf("\nSorted array:\n");

        for (int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }

        return 0;
}