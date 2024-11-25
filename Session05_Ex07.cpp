#include <stdio.h>

int main() {
    // Khai báo bien cho 2 so nguyên và UCLN
    int a, b, ucln, temp_a, temp_b;

    do {
        // yeu cau nguoi dung nhap 2 so
        printf("Moi ban nhap so thu nhat: ");
        scanf("%d", &a);
        printf("Moi ban nhap so thu hai: ");
        scanf("%d", &b);

        // kiem tra dieu kien (<=0)
        if (a <= 0 || b <= 0) {
            printf("Moi ban nhap lai so moi (so duong)\n");
        }
    } while (a <= 0 || b <= 0);  // lap lai neu 1 trong 2 so khong hop le

    // Tinh uoc chung lon nhat
    temp_a = a;
    temp_b = b;
    while (temp_b != 0) {
        int r = temp_a % temp_b;  // lay phan du
        temp_a = temp_b;          
        temp_b = r;               
    }

    // Sau khi vong lap ket thuc temp_a chinh la ucln
    ucln = temp_a;

    // In ket qua ra man hinh
    printf("Uoc chung lon nhat cua %d va %d la %d\n", a, b, ucln);

    // Ket thúc chuong trình
    return 0;
}

