#include <stdio.h>

int main() {
    // khai bao bien cho hai so bat ki
    float a, b;
    
    // yeu cau nguoi dung nhap hai so bat ki
    printf("Moi ban nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Moi ban nhap so thu hai: ");
    scanf("%f", &b);
    
    int lua_chon;
    
    do {
        // in danh sach theo yeu cau
        printf("\n    MAY TINH   \n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich hai so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        
        // yeu cau ng dung lua chon
        printf("Lua chon cua ban la: ");
        scanf("%d", &lua_chon);
        
        // thuc hien theo de bai
        switch (lua_chon) {
            case 1:
                printf("Tong cua %.2f và %.2f là %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Hieu cua %.2f va %.2f la %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Tich cua %.2f va %.2f la %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Thuong cua %.2f va %.2f la %.2f\n", a, b, a / b);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, moi ban chon lai\n");
                break;
        }
    } while (lua_chon != 5);
    
    // Ket thúc chuong trình
    return 0;
}

