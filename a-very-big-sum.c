#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int array_size,i;
	
	scanf("%d\n",&array_size);
	
	int long long array[array_size],sum=0;
	
    /*we are trying to take the sum of large sized arrays that may
    contain large size numbers,once sum is finisehd we just output the result.
    */
    
	for(i=0;i<array_size;i++){
	
	   scanf("%lld",&array[i]);
	   
	   sum += array[i];
	
	}
	
	printf("%lld\n",sum);
	
	return 0;
	
}	