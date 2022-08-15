#include<stdio.h>
bool ktSoNguyenTo(int a){
	
	if(a<=1){ return false;
	}
		
	for (int i=2;i<a;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("vui long nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("vui long nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0;
	for(int i=0;i<n;i++){
		if(ktSoNguyenTo(a[i])){
			printf("So nguyen to trong mang la: %d\n",a[i]);
			s++;
		}
	}
	if(s==0){
	printf("mang khong co so nguyen to nao\n");
	}
	
}

