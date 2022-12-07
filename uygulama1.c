#include <stdio.h>

int main(){
	
	///soru-4
	int N, o, sum=0;
    double ortalama;

    printf("ogrenci sayisini giriniz: "); 
	scanf("%d", &N);
    float note[N];
    for (o = 0; o < N; o++){
        printf("ogrenci %d =", o); scanf("%f", &note[o]);
    }

    for(o = 0; o < N; o++){
        sum += note[o];
        ortalama = (float) sum / (float) N;
    }
    
	printf("ortalama: %2f", ortalama);
	float kontrol = 0;
    for(o = 0; o < N; o++){
    	if(note[o] >= ortalama) {
        kontrol++;
        printf("%d. ogrenci  =", o);
        printf("  gectin\n ");
    	}
        else {
        printf("%d. ogrenci  =", o);
		printf("  kaldin\n");
		}
	}
}
