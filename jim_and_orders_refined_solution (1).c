#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int n, d, t, i, min, index, j, step=0;
    int* arr = (int*)malloc(sizeof(int) * n);
    scanf("%d", &n);
    /* checkout for the testcases and have that amount of array*/
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &t, &d);
        arr[i] = t+d;
        
        /*put the elements scanned into the array*/
    }
    i=0;
    while(i!=n)
    {
    
    /*take the elements in array arr to have min*/	
    	
        if(arr[i]==-9999)
        {
            i++;
            continue;
        }

       /* check for any minimum value and make swap and change index*/ 
        
        min=arr[i];
        index=i+1;
        for(j=0;j<n;j++)
        {
            if(min > arr[j] && arr[j]!=-9999)
            {
                min = arr[j];
                index = j+1;
            }
        }
        printf("%d\t", index);
        
        /* make the index  to pass over the change in index thereby the count
        so the element-1 is kept as a flag.
        */
        arr[index-1] = -9999;
        i=0;
    }

    return 0;
}