#include<stdio.h>
int main(){
	//bt: tinh tbc cac so le o vi tri chan cua mang n so nguyen
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap mang:\n");
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int s=0,dem=0;
	float tbc;
	for(int i=1;i<=n;i++){
		if(i%2==0 && a[i]%2==1){
			s=s+a[i];
			dem++;
		}
	}
	if(dem==0){
		printf("mang khong co so le o vi tri chan\n");
	}else{
		tbc=(float(s))/dem;
		printf("trung binh cong la: %f",tbc);
		
	}
}
