#include<stdio.h>
int main(){
	//bai tap nhap n, tinh tong S=1+1/1+1/2+...+1/n
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	
	float s=0; 
	if (n<1){
		printf("vui long nhap lai n lon hon 1");
	}else{
	
	for(int i=1;i<=n;i++){
	
		s=s+1/(float(i));
	}
	printf("tong can tim la: %f",s);
}
}
