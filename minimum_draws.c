#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*approach1*/

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT
	
	but store the variables in array of arrays.
	
	*/
	
	int number;
	
	scanf("%d",&number);
	
	int i = 0,c,j=0,a=0,new;
	
	char store[1000][1000];
    
    /* Scan the numbers and put all the numbers columnwise and the increase
    rows.Once the rows becomes one more the numbers(j+1), we track out all the
    top row colums, add 1 to it and print out it's integer values; 
    */
	
    while((c=getchar())!=EOF){
         
         store[i][j] = c;
         
         i++;
         
         if(c =='\n'){ 	
	       
		      store[i][j]='\0';
	       
		      i=0;
		      
		      j++;
		   
	         }
	         
	    if(j == number+1){
	    	
	    	while(a <j-1){
	           
	           new = (int) store[0][a+1]-'0';
	           
	           printf("%d\n",(new)+1);
	           
	           a++;
	    
	      } 
	           
	      break;
	    
	    }        
	    
	}     
	
    return 0;
}	
	

   
   