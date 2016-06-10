#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int mas[20], i, k = 0;
	srand(time(0));
	
	for(i = 0; i < 20; i++) {
		mas[i] = (rand() % 20) - 10;
		printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	for (i = 0; i < 20; i++) {
		if((mas[i] % 2) == 0)
		    k++;
	}	
	printf("\nParnih ch1sel: %d", k);
		
	return 0;	
}
