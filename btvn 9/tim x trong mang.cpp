#include <stdio.h>

int main(){
    int n, x;

    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);

    int mang[n];

    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d:", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap so can tim (x):");
    scanf("%d", &x);

    int timThay = 0;

    for(int i = 0; i < n; i++) {
        if (mang[i] == x) {
            timThay = 1;
        }
    }

    if(timThay){
        printf("%d co trong mang\n", x);
    }else{
        printf("%d khong co trong mang\n", x);
    }
}
