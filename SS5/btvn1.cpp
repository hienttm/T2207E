#include<stdio.h>
int main(){
	//baitap tim cac uoc cua n va tinh tong cac uoc
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	
	int s=0;
	printf("cac uoc cua %d la:\n",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
			s+=i;
		}
	}
	printf("tong cac uoc cua %d la: %d",n,s);
}
