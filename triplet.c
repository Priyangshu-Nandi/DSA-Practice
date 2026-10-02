#include <stdio.h>

void ThreeSum(int *a, int n)
{
  int count=0;

  for (int i = 0; i < n - 2; i++)
  {
    if (i > 0 && a[i] == a[i - 1])
    {
      continue;
    }
    int left = i + 1, right = n - 1;
    while (left < right)
    {

      int sum = a[i] + a[left] + a[right];

      if (sum == 0)
      {
        printf("%d %d %d", a[i] , a[left] , a[right]);
        left++;
        right--;
        int count =1;

        while (left < right && a[left] == a[left - 1])
        {
          left++;
        }
        while (left < right && a[right] == a[right + 1])
        {
          right--;
        }
      }
        else if (sum < 0)
        {
          left++;
        }
        else 
        {
          right--;
        }
      }
    }
   if(count==0)
   printf("No triplets found");
}

int main()
{
  int i, j, min;
  int arr[] = {-4, -1, 3, 4, 6, 7, 7,8};
  int n = 8;
  ThreeSum(arr,n);
  return 0;
}
