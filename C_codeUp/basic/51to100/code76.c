#include <stdio.h>
 
int main()
{
    char c;                
    char i = 'a';        
    scanf("%c", &c);
    while(i<=c)            
    {   
        printf("%c ", i);   
        i++;            
    }
    return 0;
}   