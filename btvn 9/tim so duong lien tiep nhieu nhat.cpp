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

    int maxCount = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        }else{
            count = 0;
        }
    }

    printf("So luong so duong lien tiep nhieu nhat trong mang la: %d\n", maxCount);
}
