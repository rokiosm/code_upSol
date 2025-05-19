#include<stdio.h>

int main()
{
    long long int width,height,bit;
    double MB;
 
    scanf("%lld %lld %lld", &width, &height, &bit);
    MB = (width*height*bit);
    printf("%.02lf MB",MB/(8*1024*1024));
    return 0;
}