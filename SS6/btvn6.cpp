#include<stdio.h>
int main(){
	//nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat
	int n;
	printf("nhap n:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	
	int dem=0,demmax=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			dem++;
			if(dem>demmax){
				demmax=dem;
			}
		}else dem=0;
	}
	
	if(demmax==0){
		printf("mang khong co so duong\n");
	}else{
		printf("so luong cac so duong lien tiep lon nhat la: %d",demmax);
	}
	
	
}
