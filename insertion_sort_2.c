#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
 /* looping through the code i went across each element and stored them
 the element is compared with each element and then looped to swap left higher
 values towards right and right is adjusted. At the end after a value lower,
 each element is placed.Finally printed off
 */
 int i,v,j,l;	
	
 for(i =1;i<ar_size;i++){
 
     v = ar[i];
     
     j= i;
     
     while(ar[j-1]>v&& j>=1){
     
     	 ar[j] = ar[j-1];
     	 
     	 j--;
     
     }
     ar[j] =v;
 
    for(l=0;l<ar_size;l++){
 
 	   printf("%d ",ar[l]); 
 	 
     }
     
     printf("\n");

 }
 
} 

int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}