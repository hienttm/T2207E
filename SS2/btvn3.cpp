#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap a,b,c lan luot la: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a+b>c && b+c>a && c+a>b){
		printf("do la 3 canh cua 1 tam giac\n");
		int cv=a+b+c;
		printf("chu vi tam giac la: %d\n",cv);
		double p=(double(cv))/2;
		double dt;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac la: %fl\n",dt);
	}else{
		printf("day khong phai la 3 canh cua 1 tam giac\n");
	}
	
}
