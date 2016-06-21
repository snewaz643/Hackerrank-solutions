#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void quickSort(int ar_size, int *  ar) {if(ar_size<=1)return;
/*here the function for the quicksort uses partitions in
 different way - it keeps the lower elements on one array and
 higher elements on another array then recursively calls itself
 that sorts those 2 individual arrays then first half elements
 are put into array 'ar',then temp(partition)and finally the
 higher value ones
 at the end they are looped over to print out appropriately
 */
int temp=ar[0],size1=0,size2=0,i,a1[ar_size],a2[ar_size];
    for(i=1;i<ar_size;i++){
        if(ar[i]<temp){
            a1[size1]=ar[i];
            size1++;
        }
        else{
            a2[size2]=ar[i];
            size2++;
        }
    }
    quickSort(size1,a1);
    quickSort(size2,a2);
    for(i=0;i<size1;i++)
        ar[i]=a1[i];
    ar[i]=temp;
    for(i=0;i<size2;i++)
        ar[i+size1+1]=a2[i];
for(i=0;i<ar_size;i++)
    printf("%d ",ar[i]);
    printf("\n");
}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

quickSort(_ar_size, _ar);
   
   return 0;
}