#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a,b,c; 
    scanf("%d",&n);
   
    /* first we loop through the input(n)and then the spaces would  be 3(0-2),2,1,0 
    and the spaces would be #'s that would increase by 1,2,3,....n.with each number
    of #'s ending up with newline. 
    */
    
    for(a=0;a<n;a++){
    
     for(b=0;b<n-a-1;b++){
    	
        printf(" ");
     
      } 
      
      /* both independent branches*/
        
      for(c=0;c<a+1;c++){
   	   
       printf("#");
   	   
      }
    
    printf("\n");  
      
    }
    
    return 0;
}


