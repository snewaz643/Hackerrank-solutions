#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1000
/* a basic array searching sorting where an element is scanned and the elements are scanned
separately and the elements are then looped to loop for matches that are then printed off. 
*/

int main() {

    int search_element,element_num,i,j=0;
    
    int array[MAX];
    
    scanf("%d",&search_element);
    
    scanf("%d",&element_num);
    
    for(i=0;i<element_num;i++){
        
       scanf("%d",&array[i]); 
        
    }
    
    while(j<element_num){
     
        if(array[j]==search_element){
            
            printf("%d\n",j);
            
        }
        j++;
    }
    
    return 0;
}
