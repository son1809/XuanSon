#include <stdio.h>

int main(){
    int n;

    printf("Nhap so nguyen n:");
    scanf("%d", &n);

    printf("Cac so le nho hon %d la:\n",n);
    for (int i = 1; i < n; i += 2){
        printf("%d ", i);
    }
}
