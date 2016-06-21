#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int array_size,i,sum = 0;
	
	scanf("%d\n",&array_size);
	
    int array[array_size];
	
    /*Simple array sum of scanning input and summing it up
    on a variable.At the end,printing the sum.
    */
    
	for(i=0;i<array_size;i++){
	
	   scanf("%d",&array[i]);
	   
	   sum += array[i];
	
	}
	
	printf("%d\n",sum);
	
   return 0;   

}