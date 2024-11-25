#include <stdio.h>

int main() {
	
	//tao ham va bien cho 3 so a b c chua biet nguyen hay khong
	float a, b, c, sum, tbc, min, max;
    
    // ham va bien cho lua chon
    int lua_chon;
    
    do {
        // in danh sach theo yeu cau
        printf("    MAY TINH   \n");
        printf("\n");
        printf("\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So lon nhat\n");
        printf("5. So nho nhat\n");
        printf("6. Thoat\n");
        
        // yeu cau ng dung lua chon
        printf("\n");
        printf("\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &lua_chon);
        
        // thuc hien theo de bai
        switch (lua_chon) {
            case 1:
                printf("Moi ban nhap so thu nhat: ");
                scanf("%f", &a);
                printf("Moi ban nhap so thu hai: ");
                scanf("%f", &b);
                printf("Moi ban nhap so thu ba: ");
                scanf("%f", &c);
                break;
            case 2:
            	sum = a + b + c;
                printf("Tong cua %f va %f va %f la: %.2f", a, b, c, sum);
                break;
            case 3:
            	sum = a + b + c;
                tbc = sum / 3;
                printf("Trung binh cong cua %f va %f va %f la %.2f", a, b, c, tbc);
                break;
            case 4:
	           //sau do tim ra so lon nhat
            	max = a;
	           if(b > max){
		       max = b;
	            }if(c > max){
	              	max = c;
                 	}
                 	printf("So lon nhat la %f", max);
                 break;
            case 5:
                //tim tiep ra so nho nhat
	            min = a;  
                if (b < min) {
                min = b; 
               }if (c < min) {
                min = c; 
                 }
                 printf("So be nhat la %f", min);
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, moi ban chon lai\n");
                break;
        }
    } while (lua_chon != 6);
    
    // Ket thúc chuong trình
    return 0;
}

