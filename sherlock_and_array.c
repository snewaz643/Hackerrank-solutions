#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int main() {

    /*the algorithm tries to pick up left and right sum
    where everytime we take leftsum we keep on subtracting
    leftsum and piling rightsum
     we then try seeing matching of leftsum and rightsum
     and return the truthiness of it being sherlock and 
     array.
    */
    
    int input,i,val,j,k,len;
    
    int elements[MAX];
    
    scanf("%d",&input);
    
    for(i=0;i<input;i++){
    	
    int flag =0;
    	
    int rsum =0,lsum =0; 
    
        scanf("%d",&val);
        
        for(j=0;j<val;j++){
        
           scanf("%d",&elements[j]);
        
           rsum += elements[j];
           
        }
        
        len  = val;
        
        for(k=0;k<len;k++){
        		 
            rsum-= elements[k];
           	
            if(k>0){
            
              lsum+= elements[k-1];
            
            }
           
           if(lsum == rsum){
           
             flag =1;
             
             break;
    
             }  
           
           }
           
           if(flag ==1){
        
             printf("YES\n");
        	
           }else{
        
            printf("NO\n");
          }   
        
    }
    
    return 0;
}