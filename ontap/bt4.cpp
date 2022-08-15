#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap n:");
	scanf("%d",&n);
	int a[n];
	printf("vui long nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m;
	m=n/2;
	int x;
	for(int i=0;i<m;i++){
		x=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=x;
		
	}
	printf("mang moi la:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
