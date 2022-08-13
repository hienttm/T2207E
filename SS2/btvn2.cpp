#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so a,b,c lan luot la: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem\n");
			}else{
					printf("phuong trinh vo nghiem");
			}
		}else{
			float x;
			x=-c/(float(b));
			printf("phuong trinh co nghiem la: %f",x);
		}
	}else{
		int d=b*b-4*a*c;
		if(d<0){
			printf("phuong trinh vo nghiem\n");
		}else{
			if(d==0){
				float x=-b/(2*float(a));
				printf("phuong trinh co nghiem kep la: %f",x);
			}else{
				float x1,x2;
				x1=(-b+sqrt(d))/(2*(float(a)));
				x2=(-b-sqrt(d))/(2*(float(a)));
				printf("phuong trinh co 2 nghiem la: %f va %f",x1,x2);
			}
		}
		
	}
}
