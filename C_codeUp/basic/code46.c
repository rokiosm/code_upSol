
#include <stdio.h>
 
 
int main (void)
{
    int a, b, c, sum;
    float avr;
    
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avr = (float)sum/3;
    
    printf("%d\n",sum);
    printf("%.01f",avr);
    
    return 0;
}