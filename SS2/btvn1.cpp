#include<stdio.h>
int main(){
	int a,b,c;
	printf ("vui long nhap 3 so: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int max=a;
	if (b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("so lon nhat trong 3 so la: %d",max);
}
