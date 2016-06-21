
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char array[26]={0};
	char str[1000000];
	int index = 0,count=0,j=0;
    long int stringlen;
   
   /*The basic idea of a pangram is it must have full sentence with all the 26 letters of the
   dictionary. So this function checks makes a frequency counter of arrays of letters then
   checks for truthiness of it being a pangram or not.
   */
    
   gets(str);
    
  stringlen =strlen(str);
    
  memset(array,0,sizeof(array));
  
  /*fetch the string and set an array to be set to zero.*/
    
  for(j=0;j < stringlen;j++){

     /*ensure all the 26 letters are searched and counted in frequency array
      if else checks for upper and lowercase and go to that position in the new array and
      appends it to the frequency array.
      */
      
	if((str[j]>='a'&& str[j]<='z')||(str[j]>='A'&& str[j]<='Z')){
		
		if(islower(str[j])){
			
			if(array[str[j]-'a'] == 0){
		
		    index = str[j] - 'a';
               
            count++;
		    
            array[index]= 1;
            
            }

		}
		else{
			
			if(array[str[j]-'A'] == 0){
		
			   index = str[j] - 'A';
			
			   count++;
            
               array[index]= 1;

            }    
			
		}
		
	  }
		
	}

    
    /*if all the freq counters >0 we have a pangram or else it's not*/
	
	if(count==26){
	
	  printf("pangram\n");	
		
	}else{
	
	   printf("not pangram\n");	
		
	}
    
    return 0;
}
