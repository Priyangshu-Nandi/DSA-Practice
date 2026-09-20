#include <stdio.h>
#include<stdlib.h>
                                //Q: dynamic 1D array create+insertion+
                               // deletation
    void create(int **arr,int  *n){
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
   
    *arr= (int*)malloc(*n * sizeof(int));

    if(*arr == NULL){
        printf("Memory alocation failed");
        exit(1);
    }
 printf("Enter the elements:");
    for(i=0;i< *n;i++) {
        scanf("%d",&(*arr)[i]);
    }
}

void insert(int **arr,int  *n){
int pos,i,ele;

    printf("Enter the position to insert:");
    scanf("%d",&pos);
    printf("Enter the element to insert:");
    scanf("%d",&ele);

    *arr=(int *)realloc(*arr, (*n +1) * sizeof(int));
    if(*arr == NULL){
        printf("Memory alocation failed");
        exit(1);
    }                       //Why start from (i = *n)?

    for( i= *n ; i >=pos ; i-- ){  
         arr[i+1]= arr[i];          //If you shift from left-to-right, you will overwrite elements 
      }                     //before moving them.Moving from right-to-left prevents data loss.
       arr[pos-1]=ele;
    (*n)++;
}                           //Why stop at i >= pos? Because we only need to clear the spot at pos - 1 (index 1)
    
void delete(int **arr,int  *n){
int pos,i;

    printf("Enter the position to delete:");
    scanf("%d",&pos);
    
  // Shift elements to the left
    for (i = pos - 1; i < *n - 1; i++)
    {
        (*arr)[i] = (*arr)[i + 1];
    }

    (*n)--;

    *arr = (int *)realloc(*arr, *n * sizeof(int));
}

void display(int *arr, int n)
{
    int i;

    printf("Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int *arr;
    int n;

    create(&arr, &n);

    printf("\nOriginal ");
    display(arr, n);

    insert(&arr, &n);

    printf("After insertion ");
    display(arr, n);

    delete(&arr, &n);

    printf("After deletion ");
    display(arr, n);

    free(arr);

    return 0;
}
