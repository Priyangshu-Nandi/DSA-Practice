    #include <stdio.h>
 // #include <limits.h>

void Cwmw(int *a, int n)
{
    int i=0,j=n-1,area;
    // int max= INT_MIN ;
    int max=0;

    while ( i < j ) {
         int len= j-i ;
         
         if(a[i] < a[j] ){

        area= a[i] * len;
        i++;

         }

         else {
             area= a[j] * len;
             j--;
         }

        if(area> max){
            max=area;

        }
        
    }
    printf("Maximum water area = %d", max);
}
int main()
{
    int a[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(a) / sizeof(a[0]);

    Cwmw(a, n);

    return 0;
}