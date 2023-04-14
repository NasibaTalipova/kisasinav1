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


/* 8,9,10,11 i<N n kez çaliþacak n+1 kez artýrýlacak  i < N olmasý ve i'nin N'ye ulaþana kadar
 veya öðe bulunana kadar her yinelemede 1 artýrýlmasýdýr. bu nedenle  en kötü durumda O(N)'dir

14,16  Öðe dizide bulunmazsa, döngü N kez yürütülür ve iþlev -1 döndürür.
 Bu durumda, zaman karmaþýklýðý en kötü durum olan O(N)'dir.

Öðe dizide bulunursa, döngü erken sona erecek ve iþlev, öðenin dizinini döndürecektir. 
Bu durumda, zaman karmaþýklýðý en iyi durum olan O(1)'dir.

öðeyi bulmadan önce döngü N/2 kez yürütülür.
 Bu nedenle, ortalama durumda arama fonksiyonunun zaman karmaþýklýðý O(N/2)'dir.
