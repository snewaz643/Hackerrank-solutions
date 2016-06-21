#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int testcases,number,result,i,p = 1000000007;
    
    scanf("%lld\n",&testcases);
    
    for(i=1;i<=testcases;i++){
       
        scanf("%lld\n",&number);
        
        result = (number%p);
        
        printf("%lld\n",(result*result)%p);
        
    }
    
    return 0;
}

/*
Sn= 1-0 + 4-1 + 9-4 + 16-9 +....
 = 1 + 3 + 5 + 7 +.....
 =n^2-(n-1)^2= 2n-1
 = 2(1)-1+2(2)-1+2(3)-1+2(4)-1+...
 =2(1+2+3+4...)-1
 =N*N;
 1+2+3+4+... a triangular number

U = 1+2+3+4+5+...+N-1+N
U= N+N-1+....5+4+3+2+1
2U = n's (N+1)
2U = N(N+1)
U=1/2*N(N+1)

A few distributive properties of modulo are as follows:
1. ( a + b ) % c = ( ( a % c ) + ( b % c ) ) % c
2. ( a * b ) % c = ( ( a % c ) * ( b % c ) ) % c
3. ( a – b ) % c = ( ( a % c ) – ( b % c ) ) % c ( see note )
4. ( a / b ) % c NOT EQUAL TO ( ( a % c ) / ( b % c ) ) % c */