#include <stdio.h>


int main(){

	int num;
	int num2;
	printf("Input number of rows\n");	
	scanf("%d",&num);
	num2 = num;
	for (int i = 0; i<num; i++){
		for (int j = 0; j<num2-1;j++){
			printf(" ");
		}

		for (int k = num; k>=num2; k--){
			printf("*");
		}

		printf("\n");

		num2--;
	
	}

	return 0;

}

