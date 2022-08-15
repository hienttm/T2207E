#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("vui long nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bool t = true;
	for(int i=0;i<n;i++){
		for(int j=2;j<=a[i]/2;j++){
			if(a[i]%j==0){
				t=false;
				
			}
			else{
				printf("so nguyen to trong mang la: %d\n",a[i]);
			}
		}
	}
	if(t==true){
		printf("Khong so nguyen to trong mang");
	}

}

