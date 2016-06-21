/*Implementation of Quicksort Algorithm*/

#include<stdio.h>

int partition(int A[],int start,int end);

void quick_sort(int A[],int start,int end);

void swap(int *A,int *B);

int 
main(int argc,char*argv[]){

   int ar_size;
   scanf("%d", &ar_size);
   int ar[ar_size], i;
   
   for(i = 0; i < ar_size; i++) { 
      
   	   scanf("%d", &ar[i]); 
   
   }

   quick_sort(ar,0,ar_size);

   return 0;

}

void
quick_sort(int A[],int start,int end){
  
  int partitionIndex;
  
  int i;

  if(start<end){
   
  /* I tried to use partition to quicksort making sure we reach
  base case of atleast single element that can not be further broken 
    and sorted
  */  
  partitionIndex  = partition(A,start,end);
 
  /*recursively sort left to be less than partitionIndex and recursively
  sort right part to be greater than partitionIndex
  */
 
  quick_sort(A,start,partitionIndex-1);
 
  quick_sort(A,partitionIndex+1,end);
  
  for(i =start;i<end;i++){
  
  	  printf("%d ",A[i]);
  
  }
  
  printf("\n");
  
  }
  
}

int
partition(int A[],int start,int end){

  int pivot = A[start];

  int i;
  
  int pIndex = start+1;
  
  /*loop through the elements searching elements less
  than pivot and put the greater elements away
  */
  
  for(i=start+1;i<end;i++){
      
   if(A[i]<= pivot && start<end){
   
     swap(&A[i],&A[pIndex]);
     
     pIndex++;
     
     /* move pIndex to next element*/
   }
  
  } 
  
  swap(&A[pIndex],&A[end]);
  
  /* swap last element with the pIndex ed element to make swap*/
  
  return pIndex;
  
}

void swap(int *A,int *B){

   /* the addresses need to be changed and thereby the entire array is passed
   to be swapped to make the changes.
   */	
	
   int tmp;
   
   /*initially place value to a temporary variable and then return to the value
   in the temporary variable to the other variable's place.
   */
   
   tmp = *A;
   
   *A = *B;
   
   *B = tmp;

}