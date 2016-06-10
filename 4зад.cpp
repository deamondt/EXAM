#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void) 
{ 
int mas[1000]; 
int x, i, parni = 0; 

printf("Vvedite rozmer masiva: "); 
scanf("%d", &x); 

srand(time(0)); 

for(i = 0; i < x; i++) { 
mas[i] = rand() % 20 - 10; 
} 

for(i = 0; i < x; i++) { 
printf("\nmas[%d] = %d", i, mas[i]); 
} 

for(i = 0; i < x; i++) { 
if((mas[i] % 2) == 0) { 
parni = parni + 1; 
} 
} 

printf("\nVsego parnuh %d", parni); 

return 0; 
}
