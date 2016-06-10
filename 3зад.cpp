#include <stdio.h> 
#include <stdlib.h> 

float func(float x, float y) 
{ 
if(x > y) { 
return x; 
} else { 
return y; 
} 
} 

int main(void) 
{ 
float x, y, z; 

printf("Vvedite x: "); 
scanf("%f", &x); 
printf("Vvedite y: "); 
scanf("%f", &y); 

x = func(x, y); 
printf("\n%f bolshe.", x); 

return 0; 
}
