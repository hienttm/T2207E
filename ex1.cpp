#include<stdio.h>
#include<math.h>

double tinhdientich(double a,double b, double c){
	double p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	double a,b,c;
	printf("a=\n");
	scanf("%lf",&a);
	printf("b=\n");
	scanf("%lf",&b);
	printf("c=\n");
	scanf("%lf",&c);
	
	double s;
	if(a+b>c && b+c>a && a+c>b){
		s= tinhdientich(a,b,c);
		printf("the area of triangle= %lf",s);
	}else printf("ERROR");
}

