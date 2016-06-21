#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *ar) {
   
    
    /*it is a step by step implementation of
    insertion sort that we compare backwards
    once a swap is done we make sure to print
    it off
    we keep on comparing almost all the 
    elements in the array 
    */
    
   int i = ar_size-2,j; 
    
   int last = ar[ar_size-1];
    
   while(i>=-1){
       
      if(ar[i]>last){
          
         ar[i+1] = ar[i]; 
      
      }else{
          
        ar[i+1] = last;
        
        i = -  2;
          
      }
      
      for(j =0;j<ar_size;j++){
          
          printf("%d ",ar[j]);
          
      }  
      
      printf("\n"); 
       
      i--; 
       
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
