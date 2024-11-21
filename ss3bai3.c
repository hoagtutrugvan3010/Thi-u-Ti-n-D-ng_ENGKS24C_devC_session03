#include<stdio.h>
	int main(){
		
		//tao bien R Pi chu bin va dien tich
		const float Pi = 3.14;
		int radius;
		float perimeter;
		float area;
		//nhap R bang ban phim
		printf("nhap R bang:");
		scanf("%d",&radius);
		//tinh chu bin va dien tich 
		perimeter = radius * 2 * Pi;
		area = radius * radius * Pi;
		//in kq gom 2 so thap phan
		printf("chu vi va dien tich cua hinh tron la :%.2f %.2f", area,perimeter);
		
		return 0;
	}
