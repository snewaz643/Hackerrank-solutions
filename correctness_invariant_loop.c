#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


/*This function performs a simple Insertion Sorting,
sorts and then after sorting prints with spaces.
*/

void insertionSort(int N, int arr[]) {

    /*Idea of the insertion sort:
    keep the elements lower than a
    pivot value known as value
    (each value has a chance to be value)
    to be lower thereby the whole array
    gets sorted and the value which at end becomes value is placed
    1 value more than it has looped. 
    */
    
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        
        
        
        while(j>-1 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}