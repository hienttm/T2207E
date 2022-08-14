//cho mang n so nguyen, hay tim doan [a,b] chua tat ca cac gia tri trong mang?

#include<stdio.h>
int main(){
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int a,b;
	a=arr[0];
	b=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<a){
			a=arr[i];
		}
		if(arr[i]>b){
			b=arr[i];
		}
	}
	printf("doan chua tat ca cac gia tri cua mang la: [%d,%d]",a,b);
}
