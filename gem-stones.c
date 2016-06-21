#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1000

int main() {

    int input,i,j,k,initial,count,inti; 

    char rocks[MAX][MAX];
    
    scanf("%d",&input);

    for(i =0;i<input;i++){	
    
       scanf("%s", rocks[i]);
     
   } 
  
  k = 0;
   
  j = 0;
   
  initial = 0;
  
  inti = 1;
  
  count  = 0;
   
  while(initial < strlen(rocks[0])){  
	   
   	 	 if(rocks[j][initial]==rocks[inti][k]){
   	    	 
   	        inti++;
   	        
   	        k = 0;
   	        
   	        if(inti == input){
   	        	
   	           count++;
   	           
   	           inti=1;
   	           
   	           k = 0;
   	           
   	           initial++;
   	        
   	        }
   	 	 	 
   	     }else{
   	     
   	     	k++; 
   	     	
   	     	if(k == strlen(rocks[inti])){
   	     
   	     	   k = 0;
   	     	   
   	     	   inti = 1;
   	     	   
   	     	   initial++;
   	     		
   	     	}	      	
   	     	
    }
   
 }
 
 printf("%d\n",count);
    
    return 0;
}