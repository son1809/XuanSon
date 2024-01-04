#include <stdio.h>

int main(){
    int n;

    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);

    int mang[n];

    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Trung binh cong cac so le o vi tri chan la: %.2f\n");
}
