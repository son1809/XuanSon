#include <stdio.h>

int main() {
    float cannang, chieucao, BMI;

    printf("Nhap can nang:");
    scanf("%f", &cannang);

    printf("Nhap chieu cao:");
    scanf("%f", &chieucao);

    BMI = cannang / (chieucao * chieucao);

    printf("Chi so BMI cua ban la: %.2f\n", BMI);

    if (BMI < 18.5) {
        printf("Ban dang thieu can.");
    } else if (BMI < 24.9) {
        printf("Ban co can nang binh thuong.");
    } else if (BMI < 29.9) {
        printf("Ban ðang thua can.");
    } else {
        printf("Ban dang beo phi.");
    }
}
