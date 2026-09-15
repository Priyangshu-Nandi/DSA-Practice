#include <stdio.h>

int main() {
    int i, pos;
     int arr[ ]= {50,12,34,56,8};
      int n=5; 

     printf("enter the position to delete:");
     scanf("%d",&pos);

     for( i=pos-1 ; i< n-1 ; i++ ){

        arr[i]=arr[i+1];

      }
       n--;
      printf("Array after deletation:\n");
        for(i=0 ;i< n;i++){
        printf("%d  ",arr[i] );
      }
      return 0;
}