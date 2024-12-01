#include<stdio.h>

int main() {
// B1 Khai bao mang arr, bien user, pos value, currentLength
    int arr[100];
    int user, pos, value, currentLength;
// B1.1 Nhap du lieu cho mang
    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &user);
	
	int i;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < user; i++) {
        scanf("%d", &arr[i]);
    }
// B1.2 Nhap vi tri can them va gia tri moi
    currentLength = user;
    printf("Nhap vi tri can them: ");
    scanf("%d", &pos);
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

// B2 Xu ly dieu kien
    if (pos >= 0 && pos <= currentLength && currentLength < 100) {
        for (i = currentLength; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        currentLength++;
    } else {
        printf("Vi tri loi");
        return 1;
    }

// B3 In ra man hinh
    printf("Mang sau khi them:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}

