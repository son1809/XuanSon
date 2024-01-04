#include <stdio.h>

int main(){
    int n, i;
    printf("Nhap so nguyen duong n:");
    scanf("%d", &n);

    if(n <= 1){
        printf("%d khong phai la so nguyen to.\n",n);
    }else{
        i = 2;
        while(i*i <= n){
            if (n % i == 0){
                printf("%d khong phai la so nguyen to.\n",n);
            }
            i = i + 1;
        }
        printf("%d la so nguyen to.\n", n);
    }
}
