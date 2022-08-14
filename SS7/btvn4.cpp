//nhap vao mang n so nguyen, tim x sao cho doan [-x,x] chua tat ca cac gia tri cua mang;

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("nhap mang:\n");
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x=abs(a[0]);
	for(int i=1;i<n;i++){
		if (abs(a[i]>x)){
			x=abs(a[i]);
		}
	}
	printf("doan can tim chua tat ca cac gia tri cua mang la:[-%d,%d]",x,x);
}
