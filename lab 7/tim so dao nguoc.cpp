#include <stdio.h>

int main(){
    int n;

    printf("Nhap mot so nguyen n:");
    scanf("%d", &n);

    printf("So dao nguoc cua %d la:",n);
    while(n != 0){
        printf("%d", n % 10);
        n /= 10;
    }
}
