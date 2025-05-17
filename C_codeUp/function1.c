#include <stdio.h>

void f();

void f(){
   // printf("hello\n");
   // printf("%d", 123);
   //printf("%c", '*');
   for(int i=1; i<=2; i++)
    printf("%c", '*');
}
int main(){
    f();
    return 0;
}