#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100

int main() {

    int input,i,j,count; 

    char freq_count[26] = {0},c;
    
    scanf("%d",&input);
    
    count = 0;

    for(i =0;i<input;i++){
        
       char rocks[MAX]; 
    
       scanf("%s", rocks); 
        
       for(j =0; j<strlen(rocks);j++){
           
           char c = rocks[j];
           
           if(freq_count[c -'a'] == i ){
           
              freq_count[c -'a']++;
           
             if(freq_count[c -'a'] == input){
                 
                 count++;
               
               }   
                 
            }
       }     
     
   }
    
printf("%d\n",count);    

return 0;
}