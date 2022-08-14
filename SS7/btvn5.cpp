//nhap 1 mang n so nguyen, dam bao cac so khong trung nhau

#include<stdio.h>
int main(){
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				printf("vui long nhap lai mang\n");
			}
		}
	}
	printf("mang vua nhap thoa man dieu kien cac gtri khong trung nhau");
	
}
