#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int main() {

    int input,i =0,a,b; 

    char characters[MAX];
    
    scanf("%d",&input);

    /*Simple algorithm that checks if we have a string is funny or not
    Funny algorithm ---> acxz->|c-a|==|x-z| or |x-c|==|z-a| or |a-c|==|z-x|
    */
    
    while(i<input){
    
    	scanf("%s",characters);
    	
    	a = 0;
    	
    	b = strlen(characters)-1;
    	
    	while(a < strlen(characters)-1){
    	
    	   if(abs(characters[a+1]-characters[a])==abs(characters[b]-characters[b-1])){
    	   
    	   	   a++;
    	   	   
    	   	   b--;
    	   	   
    	   	   if(a == strlen(characters)-1){
    	   	   
    	   	      printf("Funny\n");
    	   	      
    	   	   }   
    	   	   	   
    	  }else{
    	   	    
    	  	     printf("Not Funny\n");
    	  	     
    	  	     break;
    	   	   
    	   	   }
    	   
    	   	   
    	   }
    	   
    	i++;   
    	
    	}
    
    return 0;
}