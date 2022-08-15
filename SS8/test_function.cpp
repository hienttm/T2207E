#include<stdio.h>
#include "btvn.h"

int main(){
	//tinh tong cac chu so cua 1 so nguyen
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	int s;
	s=tongChuSo(n);
	printf("tong cac chu so cua n la: %d\n",s);
	
	//tinh chu vi
	int a,b,c;
	printf("nhap a,b,c:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b>c && b+c>a && a+c>b){
		int cv=CVTamGiac(a,b,c);
		printf("chu vi tam giac la: %d\n",cv);
	}else printf("%d, %d, %d khong phai la 3 canh cua 1 tam giac\n",a,b,c);
	
	int x,y;
	printf("nhap 2 so nguyen x,y:\n");
	scanf("%d",&x);
	scanf("%d",&y);
	int m,t;
	m=UCLN(x,y);
	t=BCNN(x,y);
	printf("uoc chung lon nhat cua %d va %d la: %d\n",x,y,m);
	printf("boi chung nho nhat cua %d va %d la: %d\n",x,y,t);
}
