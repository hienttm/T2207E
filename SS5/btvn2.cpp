#include<stdio.h>
int main(){
	//baitap tim UCLN va BCNN cua a,b
	
	int a,b;
	printf("vui long nhap a,b: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			printf("uoc chung lon nhat cua %d va %d la: %d\n",a,b,i);
			break;
		}
	}
	for(int i=a;i<=a*b;i++){
		if(i%a==0&& i%b==0){
			printf("boi chung nho nhat cua %d va %d la: %d\n",a,b,i);
			break;
		}
	}
}
