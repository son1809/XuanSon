#include <stdio.h>

int main(){
    int n;

    printf("Nhap so nguyen duong n:");
    scanf("%d", &n);

    while (n >= 10){
        n /= 10;
    }

    printf("Chu so dau tien cua n la: %d\n", n);
}
