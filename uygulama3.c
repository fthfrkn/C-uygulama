#include <stdio.h>

int main() {
	///soru-1
    int a[5],b[5],c[5];
	int i;
    for(i  = 0 ; i < 5; i++) {
      printf("a dizisine eleeman ekleyin :\t");
      scanf("%d", &a[i]);

      printf("b dizisine eleeman ekleyin :\t");
      scanf("%d", &b[i]);
      c[i] = a[i] + b[i];
    }

	  printf("\nc dizisi :\n");
	  for(i  = 0 ; i < 5; i++){
	  
	    printf("%d\n", c[i]);
	}
}








