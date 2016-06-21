#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,testcases, Px ,Py, Qx, Qy, Pointx, Pointy;
    
    scanf("%d\n",&testcases);
    
    /*the key was the symmetricity of the x and y co ordinates was the
    equations of 2*qcomponent -p for both x and y.
     
    Take from editorial!
    */

    for(i=1;i<=testcases;i++){
    
       scanf("%d %d %d %d\n",&Px ,&Py,&Qx,&Qy);
       
       Pointx = ((2*Qx)-Px);
       
       Pointy = ((2*Qy)-Py);
       
       printf("%d %d\n",Pointx,Pointy); 
    	
    }

    return  0;
}