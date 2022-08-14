#include<stdio.h>
int main(){
	//tinh trung binh cong cac so le trong mang n so nguyen
	int n;
	printf("vui long nhap n: \n");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			s+=a[i];
			dem++;
		}
	}
	if(dem==0){
		printf("mang tren khong co so le\n");
	}else{
		float tbc=(float (s))/dem;
		printf("trung binh cong cac so le trong mang la: %f",tbc);
	}
}
