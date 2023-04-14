#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    int bulEnkucuk(int A [], int n){
    	
    int enkucuk;
    int k;
    
    enkucuk = A [0];                   /*    1*/
    for (k = 0; k < n; k++)           /*     1    n+1  n  */
        if (A[k] < enkucuk)           /*       n-1  */
            enkucuk = A[k];
            
    return enkucuk;
}

/*  1+n+1+n;=2n+2
    T(n)= 2n+2+1+n-1+1=3n+4
    T(n)=3n
