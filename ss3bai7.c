#include<stdio.h>
		int main(){
			
		//nhap tu ban phim 1 so co 4 chu so
		int number,total,first_num,second_num,third_num,fourth_num;
		printf(" nhap 1 so co 4 chu so");
		scanf("%d", &number);
		
		first_num=number/1000;
		second_num=number/100%10; 
		third_num=number/10%10;
		fourth_num=number%10;
		//tinh tong cac chu so do va in tong ra man hinh
		total= first_num+second_num+third_num+fourth_num;
		printf("tong 4 chu so la:%d",total);
		
		return 0;
		
	}
