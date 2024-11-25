#include<stdio.h>

int main() {
	
	//so nguyen len ta dung ham int
	int a;
	
	//yeu cau nguoi dung nhap mot so ngau nhien tu ban phim 1-10
	printf("Moi ban nhap mot so tu ban phim: ");
	
	//luu vao bien a
	scanf("%d", &a);
	
	// phan loai neu nguoi dung nhap sai yeu cau thi cho nguoi dung nhap lai
	if((a <0) || (a > 10)){
		printf("Ban nhap sai so theo yeu cau roi, vui long nhap lai so moi");	
	} else{
		printf("So ban nhap da thoa man, sau day la bang cuu chuong tuong ung\n");
		for(int i = 1; i <= 10; i++){
			printf("%d * %d = %d\n", a, i, a * i);
		}
	}
	
	//ket thuc chuong trinh
	return 0;
	
}
