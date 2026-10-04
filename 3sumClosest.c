#include <stdio.h>
#include <stdlib.h>           // for abs

int ThreeSumClosest(int *a, int n,int target)
{
  int i,left,right;
  if (n < 3) return 0;
  
    int closest=a[0]+a[1]+a[2];
    for ( i = 0; i < n - 2; i++)
  {
     left = i + 1, right = n - 1;
    while (left < right)
    {

      int sum = a[i] + a[left] + a[right];

      if(abs(target-sum)<abs(target-closest)){
        closest=sum;
      }
      if(sum==target){
     return sum;
    }
      else if(sum<target){
      left++;
    }
    else{
        right--;
    }
  }

  }
  return closest;
}

int main()
{
  int arr[] = {-4, -1, 3, 4, 6, 7, 7,8};
  
 int ans = ThreeSumClosest(arr,8,23);
 printf("The sum that is closest to the target is: %d\n", ans);
  return 0;
}
