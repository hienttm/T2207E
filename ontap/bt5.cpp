#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	int a[n];
	printf("vui long nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=1;
	int dmax=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
				if(dem>dmax){
					dmax=dem;
				}
			}
		}
		dem=1;
	}
	printf("tong so lan xuat hien nhieu nhat la: %d\n",dmax);
	dem=1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dem++;
			}
		}
		if(dem==dmax){
			printf("so xuat hien nhieu nhat la: %d\n",a[i]);
		}else dem=1;

		
	}
}
