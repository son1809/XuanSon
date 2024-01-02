#include <stdio.h>

int main() {
    char kyTu;

    printf("Nhap mot ky tu:");
    scanf("%c", &kyTu);

    if ((kyTu >= 'A' && kyTu <= 'Z')){
        printf("Ky tu %c là chu cái in hoa.",kyTu);
    }else if (kyTu >= 'a' && kyTu <= 'z') {
        printf("Ky tu %c là chu cái in thuong.",kyTu);
    }else if (kyTu >= '0' && kyTu <= '9') {
        printf("Ky tu %c là so.",kyTu);
    }else{
        printf("Ky tu %c là ky tu dac biet.",kyTu);
    }
}
