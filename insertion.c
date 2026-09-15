#include <stdio.h>

int main() {
    int i, pos, ele;
     int arr[ ]= {50,12,34,56,8};
    // int n = sizeof(arr) / sizeof(arr[0]); 
    int n=5; 

     printf("enter the position to add:");
     scanf("%d",&pos);
     printf("enter the element to add:");
      scanf("%d",&ele);

      for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
      }
        arr[pos-1]=ele;
        (n)++;

        printf("Array after insertion:\n");
        for(i=0 ;i< n;i++){
        printf("%d  ",arr[i] );
      }
        return 0;
}
