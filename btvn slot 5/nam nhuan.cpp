#include <stdio.h>

int main(){
    int a;

    printf("Nhap mot nam:");
    scanf("%d", &a);

    int isLeapYear = 0;

    while(a >= 4) {
        a -= 4;
    }

    if(a = 0) {
        isLeapYear = 1;
    }

    if (isLeapYear){
        printf("%d la nam nhuan\n",a);
    }else{
        printf("%d khong phai la nam nhuan\n",a);
    }
}
