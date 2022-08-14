#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap so nguyen duong n:\n");
	scanf("%d",&n);
	
	while(n/10>0){
		n/=10;
	}
	printf("chu so dau tien la: %d",n);
}
