#include <stdio.h>
#include <math.h>

int main(){
	//nhap 3 so nguyen
	int A;
	printf("Nhap so thu nhat:");
	scanf("%d",&A);
	
	int B;
	printf("Nhap so thu hai:");
	scanf("%d",&B);
	
	int C;
	printf("Nhap so thu ba:");
	scanf("%d",&C);
	
	if((A+B>A)&&(B+C>A)&&(A+C>B)){
		int P = A+B+C;
		float P2 = P/2;
		float S = sqrt(P2+(P2-A)*(P2-B)*(P2-C));
		
		printf("chu vi tam giac:%d\n",P);
		printf("dien tich tam giac:%f",S);
	}else{
		printf("day khong phai do dai 3 canh tam giac");
	}
}


