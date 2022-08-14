#include<stdio.h>
int main(){
	//bt: tim so le cuoi cung trong mang n so nguyen
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==1){
			printf("so le cuoi cung trong mang la: %d",a[i]);
			s++;
			break;
		}
	}
	if(s==0){
		printf("mang khong co so le\n");
	}
}
