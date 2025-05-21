#include <stdio.h>

int main()
{
    int n ,min ,array[10000];
    scanf("%d",&n);
 
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    min = array[0];
    for(int i=0; i<n; i++){
        if(array[i] <= min){
            min = array[i];
        }
    }
    printf("%d", min);
    
    return 0;
}