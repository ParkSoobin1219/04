#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	printf("input the year: ");
	scanf("%d", &y);
	
	//printf("is the year %d the leap year? : %d", y, y%4==0&&y%100!=0||y%400==0);

	if(y%4==0&&y%100!=0||y%400==0){
		printf("%i is leap year!", y);
	}
	else{
		printf("%i is not leap year...", y);
	}
	
	return 0;
}
