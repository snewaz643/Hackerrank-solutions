#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    
    /*the testcases and sums given and the array is inputted we then 
    use pointers to check for two values that make up the sum.
    PRECAUTION:k and l are started indexing at 1. 
    */

    int input,i,val,j,k,l,len,sum;
    
    int elements[MAX];
    
    scanf("%d",&input);
    
    for(i=0;i<input;i++){
    
        scanf("%d",&sum);
    
        scanf("%d",&val);
        
        for(j=0;j<val;j++){
        
           scanf("%d",&elements[j]);
           
        }
        
        len  = val;
        
        for(k=0;k<len;k++){
       
          for(l=k+1;l<len;l++){
         
          	  if(elements[k]+elements[l]==sum){
          	  
          	     printf("%d %d\n",k+1,l+1);
          	     
          	     break;
          	  	  
          	  }
          	  
          }	
        	
        }
    
    }
    
    return 0;
}