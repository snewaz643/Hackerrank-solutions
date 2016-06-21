#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int
main(){

   /*it is an easy scan and add one and print out function*/
    
   /*worse case draw needed to remove an element out of pairs is one more than
   it's pair number i.e. in order to find a match for a. 1 pair u would need to take both of the socks
   out(2) b.2 pairs you would need 2(considering both unmatches) and 1(since this one would 
   match either of the two)
   */
    
   int testcases,d,new,i;

   scanf("%d\n",&testcases);

   for(i=1;i<=testcases;i++){
   
      scanf("%d\n",&new);
      
      d = new+1;
      
      printf("%d\n",d);
   
   }
   
   return 0;

}