#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int main() {

    int input,i,j,k,deletions; 

    char value[MAX];
    
    scanf("%d",&input);

    i=0;
    
    /*the key to solving this problem is to only check for 
    adjacent A's or B's(similar ones) and not mixture of both
    */
    
    
    while(i<input){	
    
       scanf("%s", value);
    
       if(value[0] == 'A' || value[0] == 'B'){
           
           /*closely checks on scopes of c programming
           k(starting at 1) and j(starting at 0)are
           looped and checked with one another similarity 
           are counted. Error for invalid inputs
           Inputs not a member of A,B. 
           */
       	   
       	   deletions=0;
        
       	   j=0;
       	   
       	   k=1;
       	   
           while(j<strlen(value)){
            	
            
                if(value[k] == value[j]){
                 
                   deletions++; 
                
                } 
                
                j++;
                
                k++;
                     
              
            }
            
           j=0;
       	   
       	   k=1;
          
          printf(" %d \n",deletions);
        
      }else{
       
          printf("Error\n");
          
          return 0;
       
     }
     
     i++;
     
   }
    
    return 0;
}