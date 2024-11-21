#include<stdio.h>

	int main(){
		
		//tao bien celsius, fahrenheit
		
		float celsius;
		float fahrenheit;
		//nhap celsius tu ban phim
		
		printf("nhap nhiet do ");
		scanf("%f", &celsius);
		//chuyen tu cel sang fah va hien thi kq
		
			fahrenheit = celsius * 1.8 + 32;
		printf("%.2f celsius = %.2f fahrenheit",celsius,fahrenheit);
		
		return 0;
	}
