#include<stdio.h>
int main(){
	//bt: nhap mang n so nguyen, tim so duong nho nhat
	
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int gan=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>0){
			gan=a[i];
			break;
		}
	}
	if(gan<=0){
		printf("mang khong co so duong\n");
	}else{
		for(int i=0;i<n;i++){
			if(a[i]>0 && a[i]<gan){
				gan=a[i];
			}
		}
		printf("so duong nho nhat trong mang la: %d",gan);
	}
	
}
