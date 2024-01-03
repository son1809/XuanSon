#include <stdio.h>

int main(){
    int n;

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    printf("Cac uoc so cua %d la: \n",n);
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d ",i);
        }
    }
}
