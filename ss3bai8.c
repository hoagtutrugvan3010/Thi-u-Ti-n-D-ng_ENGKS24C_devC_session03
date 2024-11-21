#include<stdio.h>
		int main(){
		
		//tao bien number co 4 chu so va cac bien la tung don vi cua number
		int number, first_number,second_number,third_number,fourth_number, reversed;
		printf("moi nhap so nguyen co 4 chu so: ");
		scanf("%d", &number);
		first_number=number/1000;
		second_number=number/100%10;
		third_number=number/10%10;
		fourth_number=number%10;
		//dao nguoc bien number
		reversed= fourth_number*1000+third_number*100+second_number*10+first_number;
		//in ra man hinh
		printf("so dao nghich la: %d",reversed);
		
		return 0;
	}
