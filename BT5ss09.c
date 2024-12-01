#include <stdio.h>

int main() {
    int arr[100];
    int i, menu;
    int n = 0;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1: {
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                if (n > 100) {
                    printf("Qua gioi han\n");
                    n = 100;
                }
                printf("Nhap phan tu:\n");
                for (i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                printf("Phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int sum = 0;
                printf("Phan tu chan: ");
                for (i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan la: %d\n", sum);
                break;
            }
            case 4: {
                int max, min;
                max = arr[0];
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Gia tri lon nhat la: %d\n", max);
                printf("Gia tri nho nhat la: %d\n", min);
                break;
            }
            case 5: {
                int sum = 0;
                printf("Cac phan tu la so nguyen to: ");
                for (i = 0; i < n; i++) {
                    if (arr[i] < 10) {
                        switch (arr[i]) {
                            case 2:
                            case 3:
                            case 5:
                            case 7:
                                printf("%d ", arr[i]);
                                sum += arr[i];
                                break;
                        }
                    } else if (arr[i] % 2 != 0 && arr[i] % 3 != 0 && arr[i] % 5 != 0 && arr[i] % 7 != 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", sum);
                break;
            }
            case 6: {
                int us, count = 0;
                printf("Nhap so muon tim: ");
                scanf("%d", &us);
                for (i = 0; i < n; i++) {
                    if (arr[i] == us)
                        count++;
                }
                printf("So %d xuat hien %d lan\n", us, count);
                break;
            }
            case 7: {
                int pos, value;
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n || n >= 100) {
                    printf("Loi vi tri\n");
                    break;
                }
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                for (i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                printf("Mang sau khi them phan tu: ");
            	for(i=0; i<n; i++) {
            		printf("%d ", arr[i]);
				}
                break;
            }
            case 8: {
                printf("Thoat chuong trinh\n");
                break;
            }
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (menu != 8);

    return 0;
}

