#include<stdio.h>
		int main(){
		
		//tao bien canh la duong cao
		int edge,duong_cao,area;
		//nhap canh va duong cao
		printf("nhap canh la:");
		scanf("%d", &edge);
		
		printf("nhap duong cao la:");
		scanf("%d", &duong_cao);
		//tinh dien tich hinh tam giac
		area = edge * duong_cao / 2;
		//in kq
		printf(" dien tich cua hinh tam giac la:%d", area);
		
		return 0;
	}
