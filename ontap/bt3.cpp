#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	int s=0;
	int a1=1;
	int a2=1;
	if(n==0){
		printf("n khong thuoc day Fibonacci, vui long nhap lai n!");
	}else{
		if(n==1||n==2){
			s=1;
		}else{
			for(int i=3;i<=n;i++){
			
			s=a1+a2;
			a1=a2;
			a2=s;
			}
		}
		printf("so dung o vi tri thu %d la: %d",n,s);
	}
}
