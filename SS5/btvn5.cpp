#include<stdio.h>
int main(){
	
	//bai tap tim chu so lon nhat cua so nguyen n? 
	
	int n;
	printf("vui long nhap so nguyen duong n:\n");
	scanf("%d",&n);
	
	int max=0;
	while(n>0){
		int d=n%10;
		if(d>max){
			max=d;
		}
		n/=10;
	}
	printf("chu so lon nhat la: %d",max);
}
