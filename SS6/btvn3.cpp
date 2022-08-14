#include<stdio.h>
int main(){
	//bt: nhap vao 1 mang n so nguyen,sau do nhap vao so x. ktra x co trong mang khong?
	
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x,dem=0;
	printf("vui long nhap x:\n");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(x==a[i]){
			dem++;
			printf("%d co trong mang\n",x);
			break;
		}
	}
	if(dem==0){
		printf("%d khong co trong mang\n");
	}
	
}
