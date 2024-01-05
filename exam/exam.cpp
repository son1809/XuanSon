#include <stdio.h>

int main(){
    int n;

    printf("Nhap vao kich thuoc cua mang:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap %d so nguyen:\n",n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int socuoi = -1;

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] % 2 == 0){
            socuoi = arr[i];
            break;
        }
    }

    if(socuoi != -1){
        printf("So chan cuoi cung trong mang la: %d\n",socuoi);
    }else{
        printf("Khong co so chan trong mang\n");
    }
}
