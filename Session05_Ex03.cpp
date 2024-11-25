#include<stdio.h>

int main() {
	
	//khai bao bien voi kieu so nguyen
	int a, sum = 0;
	
	//yeu cau nguoi dung nhap va gan gia tri cho bien
	printf("Moi ban nhap mot so nguyen duong: ");
	scanf("%d", &a);
	
    //neu nhap so am cho ket thuc chuong trinh luon
    
    // dung for
    for(int i = 1; i <= a; i++){
    	sum = sum + i;
    	printf("Lan lap thu %d, ket qua sum la: %d\n", i + 1, sum);
	}
	
	//ket thuc chuong trinh
	return 0;
}
