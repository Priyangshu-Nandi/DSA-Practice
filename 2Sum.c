#include <stdio.h>
                            //When array is Sorted-Two pointer O(n) | O(1)
void TwoSum(int *a, int n,int target)
{
    int i=0;
    int j=n-1;
    while(i<j){

        int sum=a[i]+a[j];

        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else {
         printf("target matched!! Those two numbers are :%d %d \n",a[i],a[j]); 
        return;
      }
    }
    printf("Target not found\n");

}
int main(){

    int arr[]={2,5,9,12,45,78};
    int n = sizeof(arr) / sizeof(arr[0]);
    TwoSum(arr,n,23);   //23 is target here-output:target not found
    return 0;
}