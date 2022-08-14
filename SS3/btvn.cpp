#include<stdio.h>
int main(){
	int d;
	printf("vui long nhap ngay:\n");
	scanf("%d",&d);
	
	int m;
	printf("vui long nhap thang:\n");
	scanf("%d",&m);
	
	int dem;
	if(d>31||m>12||d<1||m<1){
		printf("vui long nhap lai ngay thang\n");
	}else{
		switch (m){
		case 1:
			dem=d;
			break;
		case 2: 
			dem=d+31;
			break;
		case 3:
			dem=d+31+28;
			break;
		case 4: 
			dem=d+31+28+31;
			break;
		case 5:
			dem= d+31+28+31+30;
			break;
		case 6:
			dem=d+31+28+31+30+31;
			break;
		case 7:
			dem=d+31+28+31+30+31+30;
			break;
		case 8:
			dem=d+31+28+31+30+31+30+31;
			break;		
		case 9:
			dem=d+31+28+31+30+31+30+31+31;
			break;
		case 10:
			dem=d+31+28+31+30+31+30+31+31+30;
			break;	
		case 11:
			dem=d+31+28+31+30+31+30+31+31+30+31;
			break;	
		case 12:
			dem=d+31+28+31+30+31+30+31+31+30+31+30;
			break;
	}
	printf("do la ngay thu: %d trong nam\n",dem);
	
	int x=dem%7;
	switch (x){
		case 1:
			printf("do la ngay thu hai\n");
			break;
		case 2:
			printf("do la ngay thu ba\n");
			break;
		case 3:
			printf("do la ngay thu tu\n");
			break;
		case 4:
			printf("do la ngay thu nam\n");
			break;
		case 5:
			printf("do la ngay thu sau\n");
			break;
		case 6:
			printf("do la ngay thu bay\n");
			break;
		case 0:
			printf("do la ngay chu nhat\n");
			break;
		
	}
	}
	
	
}
