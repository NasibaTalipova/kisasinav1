#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int search( int D[]; int N, int sayi) {
	int i=0,
	while(i< N) {
		if (D[i] ==sayi)
		break;
		i++;
		
	}
	if (i<N) return i;
	
	else return -1;
}


/* 8,9,10,11 i<N n kez �ali�acak n+1 kez art�r�lacak  i < N olmas� ve i'nin N'ye ula�ana kadar
 veya ��e bulunana kadar her yinelemede 1 art�r�lmas�d�r. bu nedenle  en k�t� durumda O(N)'dir

14,16  ��e dizide bulunmazsa, d�ng� N kez y�r�t�l�r ve i�lev -1 d�nd�r�r.
 Bu durumda, zaman karma��kl��� en k�t� durum olan O(N)'dir.

��e dizide bulunursa, d�ng� erken sona erecek ve i�lev, ��enin dizinini d�nd�recektir. 
Bu durumda, zaman karma��kl��� en iyi durum olan O(1)'dir.

��eyi bulmadan �nce d�ng� N/2 kez y�r�t�l�r.
 Bu nedenle, ortalama durumda arama fonksiyonunun zaman karma��kl��� O(N/2)'dir.
