#include <stdio.h>

int main(){
    int n;
    
    printf("Nhap so nguyen n:");
    scanf("%d", &n);
    
    printf("Cac uoc cua %d la:",n);
    int i, j = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            j += i;
        }
    }
    
    printf("tong cac uoc cua %d la: %d\n", n, j);
}
