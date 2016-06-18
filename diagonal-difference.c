#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n+1][n+1],a_i,a_j;
    int primary_diagonal_sum = 0,secondary_diagonal_sum = 0;
    
    /* here we tried to find the modulus of the left hand diagonal and 
    the right hand diagonal and we are trying to taking the absolute
    value of the sums of the sums.
    */
    
    for(a_i = 1; a_i < n+1; a_i++){
       for(a_j = 1; a_j < n+1; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
          
          /*if i and j matches we pick and sum the primary diagonal*/
           
          if(a_i == a_j){
              
              primary_diagonal_sum += a[a_i][a_i];
              
          }
           
        }
        
      /* we than start picking the diagonal from the right hand corner and key is to
      using y index as n-i(the first index being looped)and we add one since it was
      offset by 1. 
      */
        
    secondary_diagonal_sum += a[a_i][n-a_i+1];
         
    }   
    
    printf("%d\n",abs(primary_diagonal_sum - secondary_diagonal_sum));
  
    return 0;
}