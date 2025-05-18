#include <stdio.h>

int main(){
    int num1, num2 = 1;
    scanf("%d",&num1);
    replay:
    scanf("%d",&num2);
    if(num1-- != 0){
        printf("%d\n",num2);
        goto replay;
        
    }
    return 0;
}