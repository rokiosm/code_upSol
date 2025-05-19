#include<stdio.h>

int main()
{
    int n, i=0, sum=0;
    scanf("%d", &n);
    do{
        i++;
        if(sum >= n) { break;}
        sum += i;
    }
    while(1);
    printf("%d", sum);
    return 0;
}