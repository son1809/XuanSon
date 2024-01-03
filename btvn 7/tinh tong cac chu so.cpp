#include <stdio.h>

int main(){
    int n, i = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        i += n % 10;
        n /= 10;
    }

    printf("Tong cac chu so cua %d la: %d\n", n, i);
}
