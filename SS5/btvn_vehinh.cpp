#include<stdio.h>
int main(){
	
	printf("ve hinh 1:\n"); 
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			printf("*  ");
		}
		printf("\n");
	}
	printf("ve hinh 2:\n");
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i%2==0 && j==5){
				continue;
			}
			printf("* ");
		}printf("\n");
	}
	printf("ve hinh 3: \n");
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("* ");
		}printf("\n");
	}
	
	printf("ve hinh 4: \n");
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			for(int k=0;k<=i;k++){
				printf("*");
			}printf("\t");
		}printf("\n");
	}
}
