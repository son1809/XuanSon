#include <stdio.h>

int main(){
    int n;

    printf("Nhap so nguyen n:");
    scanf("%d", &n);

    int max = n - 1;

    while (max % 2 != 0 || max % 3 != 0){
        max--;
    }

    printf("So lon nhat nho hon %d va chia het cho ca 2 va 3 la: %d\n", n, max);
}
