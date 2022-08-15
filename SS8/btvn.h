#include<stdio.h>

	
	//viet ham tinh tong cac chu so cua 1 so nguyen
int tongChuSo(int a){
	int s=0;
	while(a>0){
			s+=a%10;
			a/=10;
	}
	return s;
}
	
	//viet ham tinh chu vi tam giac
int CVTamGiac(int a,int b,int c){
	return a+b+c;
}
	
	//viet ham tim uoc chung lon nhat cua 2 so
int UCLN(int a,int b){
	for(int i=a;i >0;i--){
		if(a%i==0 && b%i==0){
			return i;
			break;
		}
	}
}
	
	//viet ham tim boi chung nho nhat
	
int BCNN(int a,int b){
	for(int i=a;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			return i;
			break;
		}
	}
}

