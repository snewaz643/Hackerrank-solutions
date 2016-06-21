#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int main() {

    int input,i,ops,start,end; 

    char value[MAX];
    
    scanf("%d",&input);

    i=0;
    
    /* the aim of the problem is to make the 
    make the words into palindrome to keep the
    message secret to be later decrypted.
    */
    
    while(i<input){	
    
       scanf("%s", value);
       
       start = 0;
       
       end = strlen(value)-1;
       
       ops = 0;
      
       /*we aim to start two pointers on two ends 
       and then try to make the end values equal
       to each other and the operations needed are 
       stored and printed out. e.g. cba->aba(2 operations) 
       */
        
       while(start<end){

        if(value[start]!=value[end]){
        
           ops+=abs(value[start]-value[end]);	
        
        } 
        
      start++;
      
      end--;  
       
      }
      
      printf("%d\n",ops);
       	   
     i++;
     
   }
    
    return 0;
}