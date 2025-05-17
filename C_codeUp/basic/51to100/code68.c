#include <stdio.h>
 
int main (void)
{
    int a, b;
    scanf("%d", &a);
    b = a /10;
    if(b>=9) { printf("A");}
    else if(b>=7) { printf("B");}
    else if(b>=4) { printf("C");}
    else { printf("D");}
    return 0;
}