#include <stdio.h>

int main() {
    int n, a = 1;

    printf("Nhap so nguyen duong n:");
    scanf("%d", &n);

    for(int i = 2; i <= n / 2; ++i){
        if (n % i == 0) {
            a += i;
        }
    }

    if(a == n){
        printf("%d la so hoan hao\n", n);
    }else{
        printf("%d khong phai la so hoan hao\n", n);
    }
}
