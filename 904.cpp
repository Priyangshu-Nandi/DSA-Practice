#include<iostream>
#include<unordered_map>
using namespace std;      // 904.Fruits in the baskets
     //longest subarray with atmost 2 distinct element
int longestSubarray(int arr[],int n){
   int low=0, maxLen=0;
   unordered_map<int , int>freq;

   for(int high=0;high<n;high++){
    freq[arr[high]]++;

    while(freq.size() >2){   //freq.size():Size of Hashmap
        freq[arr[low]]--;    //   (nub of distinct ele)

        if(freq[arr[low]]==0){
            freq.erase(arr[low]);
        }
            low++;
    }
    maxLen= max(maxLen,high-low+1);
   }
        return maxLen;
}
int main()
{
    int a[] = {1, 2, 1, 2, 2, 1, 8, 3, 7};
    int n = 9;

    int result=  longestSubarray(a, n);
    cout << result<< endl;

    return 0;
}