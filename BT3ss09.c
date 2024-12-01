#include<stdio.h>

int main(){
// B1 Khai bao mang arr, bien user, pos value, currentLength
	int arr[100];
	int user, pos, currentLength;
// B1.1 Nhap du lieu cho mang	
	printf("Nhap so phan tu muon nhap: ");
	scanf("%d", &user);
	int i;
	printf("Nhap phan tu cua mang:\n");
	for(i=0; i<user; i++){
		scanf("%d", &arr[i]);
	}
// B1.2 Nhap vi tri can xoa
	currentLength = user;
	printf("Nhap vi tri can xoa: ", currentLength);
	scanf("%d", &pos);

// B2 Xu ly dieu kien	
	if(pos>=0 && pos < currentLength){
		for(i= pos; i< currentLength - 1; i++){
			arr[i] = arr[i+1];
		}
		currentLength --;
	} else {
		printf("Loi vi tri");
		return 1;
	}

// B3 In ket qua ra man hinh	
	printf("Mang sau khi xoa:\n");
	for(i=0; i<currentLength; i++){
		printf("%d", arr[i]);
	}

	return 0;
}
