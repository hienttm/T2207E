//nhap vao mang n so nguyen, va 1 so nguyen x. Hay tim gia tri trong mang gan x nhat

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	printf("Nhap x:\n");
	scanf("%d",&x);
	
	int dmin=abs(a[0]-x);
	for(int i=1;i<n;i++ ){
		int d=abs(a[i]-x);
		if(d<dmin){
			dmin=d;
		}
	}
	printf("gia tri trong mang gan %d nhat la: \n",x);
	for(int i=0;i<n;i++){
		if(abs(a[i]-x)==dmin){
			printf("%d\n",a[i]);
		}
	}
	
}
