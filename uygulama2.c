#include <stdio.h>

int main(){

	///soru-3
	int dizi[10];
	int l;
    printf("\n10 tane sayi giriniz:\n");
    for(l = 0; l < 10; l++){
    	scanf("%d", &dizi[l]);
	}	
	
	int m;
	int sayac = 0;
	printf("result:\n");
	for(m = 0; m < 10; m++){
		int n;
		int x;
		for(n = m + 1; n < 10; n++){
			if (dizi[m] == dizi[n]){
				dizi[n] = 0;							
			}
		}
		if(dizi[m] != 0)
            printf("%d\n", dizi[m]);                  
	}
}
