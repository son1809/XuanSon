#include <stdio.h>

float trungBinh(int mang[], int kichThuoc){

    int tong = 0;
    for (int i = 0; i < kichThuoc; i++) {
        tong += mang[i];
    }

    return (float)tong / kichThuoc;
}

int main(){
    int soNguyen[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(soNguyen) / sizeof(soNguyen[0]);

    float ketQua = trungBinh(soNguyen, kichThuoc);

    printf("Trung binh: %.2f\n", ketQua);
}
