#include<stdio.h>
// Khai bao mang, bien menu, n, pos, size
int main(){
	int arr[100];
	int menu, n, pos;
	int size = 0;
// In menu cho nguoi dung	
	do {
		printf("MENU\n");
		printf("1.Nhap vao mang\n");
		printf("2.Hien thi mang\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Thoat\n");
		printf("Lua chon cau ban: ");
		scanf("%d", &menu);
		
		switch(menu) {
// Nhap vao mang
			case 1:
				printf("Nhap so luong phan tu: ");
				scanf("%d", &size);
				if(size>100) {
					printf("Qua gioi han\n");
					size=100;
				}
				printf("Nhap %d phan tu: ", size);
				int i;
				for(i=0; i<size; i++) {
					scanf("%d", &arr[i]);
				}
				break;
// Hien thi mang				
			case 2:
			printf("Mang: ");
			for(i=0; i<size; i++) {
				printf("%d", &arr[i]);
			}	
			printf("\n");
			break;
// Them phan tu			
			case 3:
			if(size<100) {
				printf("Nhap phan tu: ");
				scanf("%d", &arr[i]);
				arr[size] = n;
				size++;
			} else {
				printf("Mang da day\n");
			}
			break;
// Sua phan tu			
			case 4:
			printf("Nhap phan tu can sua: ", size);
			scanf("%d", &pos);
			if (pos>=0 && pos<size) {
				scanf("%d", &arr[pos]);
			} else {
				printf("Phan tu loi\n");
			}
			break;
// Xoa phan tu			
			case 5:
			printf("nhap phan tu muon xoa: ", size);
			scanf("%d", &pos);
			if(pos>=0 && pos<size) {
				for(i = pos; i < size -1; i++) {
					arr[i] = arr[i + 1];
				}
				size --;
			} else {
				printf("Phan tu loi\n");
			}
			break;
// Thoat chuong trinh			
			case 6:
			printf("Thoat chuong trinh\n");
			break;
			
		default:
			printf("Lua chon khong hop le. Thu lai\n");
		}	
	} while(menu !=6);

	return 0;
}
