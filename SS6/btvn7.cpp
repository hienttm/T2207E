#include<stdio.h>
int main(){
	// bt: nhap mang n so nguyen, tim xem chuoi so duong co tong gia tri lon nhat la bn? vd: 1 2 3 4 -1 -2 33 22 thì in ra là 55
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=0,smax=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			s+=a[i];
			if(s>smax){
				smax=s;
			}
		}else s=0;
	}
	if(smax==0){
		printf("mang khong co so duong");
	}else printf("gtri lon nhat cua chuoi so duong lien tiep la: %d",smax);
}
