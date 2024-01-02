#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("Nhap vao 3 so nguyen a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b){
        int chuvi = a + b + c;
        
        float p = (float)(a + b + c)/2;
        float dientich = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("Chu vi tam giac la: %d\n", chuvi);
        printf("Dien tich tam giac la: %f\n", dientich);
    }else{
        printf("Ba so da nhap khong tao thanh tam giac\n");
    }
}
