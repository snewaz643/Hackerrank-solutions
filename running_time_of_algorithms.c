#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/*it uses the same insertion logic of placing ordering left and right values
according to hierarchy and then performs the swapping and counts the swaps as
shifts and prints it on the go. 
*/

void insertionSort(int N, int arr[]) {
    int i,j;
    int value,shifts =0;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        
        
        
        while(j>-1 && value<arr[j])
        {
            arr[j+1]=arr[j];
            
            shifts ++;
            
            j=j-1;
        }
        arr[j+1]=value;
        
    }
    
    printf("%d\n",shifts);
    
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