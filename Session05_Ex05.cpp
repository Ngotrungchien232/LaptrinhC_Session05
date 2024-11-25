#include<stdio.h>

int main() {
	
	//in tat ca cac bang cuu chuong tu 2 den 9
	// tao cac bien ung voi cac bang cuu chuong tu 2 den 9
	int num2, num3, num4, num5, num6, num7, num8, num9;
	
	//tien hanh tinh toan cac bang cuu chuong 
	// ta se co 2 bien phu i la thu tu cac bang cuu chuong
	int i;
	
	// j la thu tu tu 1 den 10 trong bang cuu chuong 
	int j;
	
	// ta co the long hai vong lap for vao trong de giai bai toan nay
	for(i = 2; i <= 9; i++){
		printf("Bang cuu chuong cua %d\n là: ", i);
		for(j = 1; j <= 10; j++){
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	
	//ket thuc chuong trinh 
	return 0;
	
	
	
}
