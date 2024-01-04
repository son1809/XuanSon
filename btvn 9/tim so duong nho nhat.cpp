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

    int min = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            if(min = -1 || arr[i] < min){
                min = arr[i];
            }
        }
    }

    if(min != -1){
        printf("So duong nho nhat trong mang la: %d\n", min);
    }else{
        printf("Khong co so duong trong mang\n");
    }
}
