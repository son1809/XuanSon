#include <stdio.h>

int main() {
    char kyTu;

    printf("Nhap mot ky tu:");
    scanf("%c", &kyTu);

    if ((kyTu >= 'A' && kyTu <= 'Z')){
        printf("Ky tu %c l� chu c�i in hoa.",kyTu);
    }else if (kyTu >= 'a' && kyTu <= 'z') {
        printf("Ky tu %c l� chu c�i in thuong.",kyTu);
    }else if (kyTu >= '0' && kyTu <= '9') {
        printf("Ky tu %c l� so.",kyTu);
    }else{
        printf("Ky tu %c l� ky tu dac biet.",kyTu);
    }
}
