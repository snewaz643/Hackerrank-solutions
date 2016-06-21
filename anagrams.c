#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int main() {

    int input,i =0,j; 

    char characters[MAX];
    
    scanf("%d",&input);
  
    /*if the length of the characters is odd then we print -1
    else we have to arrange two sections of the letters to produce
    similar things
    */
    
    while(i<input){
    
    	scanf("%s",characters);
    	
    	int len = strlen(characters);
   
    	if(len % 2 != 0){
    	
    	  printf("-1\n");
    	
    	}else{
    	
           /*we have to make sure we have first half with positive
           frequency counts and second hald with negative frequency
           counts and the counts should be halved and absolute
            should be taken since absolute will result as
            double the value.
           */
            
    	  char freq_count[26] ={0};
    	  
    	  int count = 0;
    		
    	  for(j=0;j<len/2;j++){
    	   
    	     char c = characters[j]; 	  
    	  	  
    	  	  freq_count[c - 'a']++;
    	  
    	  }	
    	  
    	  for(j=len/2;j<len;j++){
    	   
    	     char c = characters[j]; 	  
    	  	  
    	  	 freq_count[c - 'a']--;
    	  
    	  }
    	  
    	  for(j =0;j<26;j++){
    	  
    	     count+=abs(freq_count[j]);
    	  	  
    	  }
    	  
    	  printf("%d\n",count/2);
    	  
    	
    	}
    	   
    	i++;   
    	
    	}
    
    return 0;
}