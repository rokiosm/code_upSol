#include <stdio.h>

int main(){
    int n, x, y;
    int a[20][20]={};

    for (int i=1; i<=19; i++){
        for (int j=1; j<=19; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    scanf("%d", &n); 

    for(int i=1; i<=n; i++) {
        scanf("%d %d", &x, &y);
        for(int j=1; j<=19; j++) {
            if(a[x][j]==0) 
                a[x][j]=1;
            else 
                a[x][j] = 0;
        }
        for(int j=1; j<=19; j++){
            if(a[j][y]==0) 
                a[j][y]=1;
            else 
                a[j][y] = 0;
        }
    }
    for (int i=1; i<=19; i++){
	    for (int j=1; j<=19; j++)
	        printf("%d ", a[i][j]);
	    printf("\n");
	}
    return 0;
}