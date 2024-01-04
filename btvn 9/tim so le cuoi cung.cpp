#include <stdio.h>

int main(){
    int n;

    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);

    int mang[n];

    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d:", i + 1);
        scanf("%d", &mang[i]);
    }

    int soLeCuoiCung = -1;

    for(int i = n - 1; i >= 0; i--){
        if (mang[i] % 2 != 0){
            soLeCuoiCung = mang[i];
        }
    }

    if(soLeCuoiCung != -1){
        printf("So le cuoi cung trong mang la: %d\n", soLeCuoiCung);
    }else{
        printf("Khong co so le trong mang.\n");
    }
}
