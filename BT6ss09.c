#include<stdio.h>

int main() {
    int arr[100][100];
    int rows, cols, menu;
    int i, j;
    
    do {
        printf("MENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu tren duong cheo chinh\n");
        printf("6. In ra cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
        
        switch (menu) {
            case 1: {
                printf("Nhap kich co ma tran:\n");
                scanf("%d %d", &rows, &cols);
                
                printf("Nhap gia tri cho phan tu:\n");
                for(i=0; i<rows; i++) {
                    for(j=0; j<cols; j++) {
                        printf("arr[%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2: {
                printf("Gia tri cac phan tu cua mang theo ma tran:\n");
                for(i=0; i<rows; i++) {
                    for(j=0; j<cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int sum = 0;
                printf("Phan tu le: ");
                for(i=0; i<rows; i++) {
                    for(j=0; j<cols; j++) {
                        if(arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le la: %d\n", sum);
                break;
            }
            case 4: {
                int product = 1;
                printf("Phan tu nam tren duong bien cua mang: ");
                for(i=0; i<rows; i++) {
                    for(j=0; j<cols; j++) {
                        if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            product *= arr[i][j];
                            printf("%d ", arr[i][j]);
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien la: %d\n", product);
                break;
            }
            case 5: {
                printf("Phan tu tren duong cheo chinh: ");
                for(i=0; i<rows; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }
            case 6: {
                printf("Phan tu tren duong cheo phu: ");
                for(i=0; i<rows; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
                break;
            }
            case 7: {
                int sum = 0;
                int maxR = 0;
                int maxSum = 0;
                for(i=0; i<rows; i++) {
                    sum = 0;
                    for(j=0; j<cols; j++) {
                        sum += arr[i][j];
                    }
                    if(sum > maxSum) {
                        maxSum = sum;
                        maxR = i;
                    }
                }
                printf("Dong co tong gia tri lon nhat la: ");
                for (j = 0; j < cols; j++) {
                    printf("%d ", arr[maxR][j]);
                }
                printf("\nTong cua dong nay: %d\n", maxSum);
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

