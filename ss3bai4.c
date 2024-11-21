#include<stdio.h>
	int main(){
		
		//tao bien toan van anh float
		float math,literature,english,total,diemTrungBinh;
		//nhap diem toan van anh tu ban phim
		printf("nhap so diem toan:");
		scanf("%f", &math);
		
		printf("nhap so diem van:");
		scanf("%f", &literature);
		
		printf("nhap so diem anh:");
		scanf("%f", &english);
		//tinh tong va diem trung binh
		total = math + literature + english;
		diemTrungBinh = total / 3;
		//in kq 2 so thap phan
	printf("so diem tong va trung binh cua 3 mon la :%.2f %.2f", total, diemTrungBinh);
		
		return 0;
	}
