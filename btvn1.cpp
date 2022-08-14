//nhap vao mang n so nguyen, va 1 so nguyen x. Hay tim gia tri trong mang  xa x nhat

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
	
	int d,dmax=0;
	
	for(int i=0;i<n;i++){
		d=abs(a[i]-x);
		if(d>dmax){
			dmax=d;
		}
	}
	printf("gia tri trong mang xa gia tri %d nhat la:\n",x);
	for(int i=0;i<n;i++){
		if (abs(a[i]-x)==dmax){
			printf("%d\n",a[i]);
			
		}
	}
	
}
