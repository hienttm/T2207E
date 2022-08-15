#include<stdio.h>
int main(){
	//bt nhap n, ktra n co phai so nguyen to khong?
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	int s=0;
	if(n<=1){
		printf("%d khong phai la so nguyen to",n);
	}else{
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			s++;
			break;
		}
	}
	if(s==0){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to",n);
	}
}
}

