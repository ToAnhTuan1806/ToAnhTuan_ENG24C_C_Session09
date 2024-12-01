#include<stdio.h>

int main(){
// B1 Khai bao bien va gan gia tri cho mang	
	int user, pos, value;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &user);
 	
	int arr[user];
	printf("Nhap cac phan tu cua mang:\n");	
	int i;
	for(i=0; i<user; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Nhap vi tri can sua: ");
	scanf("%d", &pos);
	printf("Nhap gia tri moi: ");
	scanf("%d", &value);
// B2 Xu ly dieu kien
	if(pos >= 0 && pos < user) {
		arr[pos] = value;
	} else {
		printf("Vi tri loi");
		return 1;
	}
// B3 In ket qua
	printf("Mang sau khi sua:\n");
	for(i=0; i<user; i++) {
		printf("%d ", arr[i]);
	}
		
	return 0;
}
