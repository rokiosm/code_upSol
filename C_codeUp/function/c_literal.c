#include <stdio.h>
#include <string.h>

#define N 100
#define PI 3.14
#define C 'X'
#define STR "HANSUNG"

int main(void){
    int i;
    char c;
    double d;
    char str[256];

    i = N;
    d = PI;
    c = C;
    strcpy(str, STR);

    printf("i = %d\n", i);
    printf("d = %lf\n", d);
    printf("c = %c\n", c);
    printf("c = %d\n", c);
    printf("str = %s\n", str);

    return 0;
}
