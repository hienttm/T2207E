#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap n=\n");
	scanf("%d",&n);
	
	//tim cac so le nho hon n:
	int s=0;
	
	for(int i=1;i<n;i++){
		if(i%2==1){
			printf("so le nho hon %d la: %d\n",n,i);
			s++;
		}
	}
	if(s==0){
		printf("khong co so le nao nho hon %d\n",n);
	}
	
	//tim so lon nhat nho hon n chia het cho 2 va 3:
	int t=0;
	for(int i=n-1;i>=6;i--){
		if(i%2==0 && i%3==0){
			printf("\n so lon nhat nho hon %d chia het cho ca 2 va 3 la: %d \n",n,i);
			t++;
			break;
		}
	}
	if(t==0){
		printf("khong co so nao nho hon %d chia het cho ca 2 va 3\n",n);
	}
	
	// tim cac uoc cua n:
	printf("cac uoc cua %d la:\n",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
		}
	}
	
	//tim so dao nguoc cua n
	int daonguoc=0;
	while(n>0){
		daonguoc=daonguoc*10+n%10;
		n/=10;
	}
	printf("so dao nguoc la: %d",daonguoc);
}
