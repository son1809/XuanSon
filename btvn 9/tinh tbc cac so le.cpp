#include <stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int max = 0;
    int current = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            current += arr[i];
            if(current > max){
                max = current;
            }
        }else{
            current = 0;
        }
    }

    printf("Tong lon nhat cua chuoi so duong la: %d\n", max);
}
