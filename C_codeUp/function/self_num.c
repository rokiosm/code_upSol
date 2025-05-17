#include <stdio.h>

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}

// 셀프 넘버인지 확인하는 함수
int is_self_number(int num) {
    for (int i = 1; i < num; i++) {
        if (d(i) == num) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (is_self_number(i)) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
