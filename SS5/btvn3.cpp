#include<stdio.h>
int main(){
	//baitap: tinh tong cac chu so cua so nguyen n?
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	int s=0;
	if(n<0){
		n=-n;
	}
	while(n>0){
		s=s+n%10;
		n=n/10;
	}
	printf("tong cac chu so la: %d",s);
}
