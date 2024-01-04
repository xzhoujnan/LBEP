#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int mang[n];
    printf("Nhap cac phan tu cua mang:\n");

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    // Tìm chuỗi số dương có tổng lớn nhất
    int tongHienTai = 0;
    int tongLonNhat = INT_MIN; // Giả sử không có chuỗi số dương

    for (int i = 0; i < n; i++) {
        if (mang[i] > 0) {
            tongHienTai += mang[i];
        } else {
            // Nếu gặp số không dương, reset tổng hiện tại
            tongHienTai = 0;
        }

        // Cập nhật tổng lớn nhất nếu có sự thay đổi
        if (tongHienTai > tongLonNhat) {
            tongLonNhat = tongHienTai;
        }
    }

    if (tongLonNhat != INT_MIN) {
        printf("Tong lon nhat cua chuoi so duong trong mang la: %d\n", tongLonNhat);
    } else {
        printf("Khong co chuoi so duong trong mang.\n");
    }
}