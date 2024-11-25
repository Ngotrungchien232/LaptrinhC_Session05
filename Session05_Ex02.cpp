#include <stdio.h>

int main() {
	
	//khai bao bien voi so cho truoc 
    int a = 5;
    
    //khai bao bien voi so nhap  tu ban phim
    int i;

    // yeu cau nguoi dung nhap mot so tu ban phim
    do {
        printf("Moi ban nhap mot so: ");
        
        //gan gia tri cua so vua nhap vao bien
        scanf("%d", &i);
        
        //kiem tra xem so vua nhapn co dung voi so cho truoc khong
        if (i != a) {
            printf("So nhap khong dung, vui long thu lai!\n");
        }
        
        //lap lai neu k dung voi so cho truoc
    } while (i != a); //!= la toan tu so sanh khong bang

    printf("Chuc mung! Ban da nhap dung so cho truoc.\n");
    
    //ket thuc chuong trinh
    return 0;
}

