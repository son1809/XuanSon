#include <stdio.h>

int main(){
    int a, b, ucln, bcnn, i;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    
    for (i = 1; i <= a && i <= b; i++){
        if (a % i == 0 && b % i == 0){
            ucln = i;
        }
    }
    bcnn = (a * b) / ucln;

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);
}
