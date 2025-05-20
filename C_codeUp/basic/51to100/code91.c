#include<stdio.h>

int main()
{
    long long int a, m, d, n;
	scanf("%lld %lld %lld %lld", &a, &m, &d ,&n);

    for(int i = 1; i < n; i++){
        a = a * m + d;
    }
    n = a;
    printf("%lld", n);
    return 0;
}