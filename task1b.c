#include <stdio.h>


int main(){

	int num;
	int num2;
	int i = 0;
	int j = 0;
	printf("Input number of rows\n");
	scanf("%d",&num);
	num2 = num;
	int k = num;
	while(i<num) {
		j = 0;
		k = num;
		while(j<num2-1){
			printf(" ");
			j++;
		}

		while(k>=num2){
			printf("*");
			k--;
		}

		printf("\n");

		num2--;
		i++;
	}

	return 0;

}

