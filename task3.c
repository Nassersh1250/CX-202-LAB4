#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	int vert=0;
	int hori=0;
	int verttres;
	int horitres;
	int n = 0;
	char dir;
	srand(time(NULL));
	verttres = rand()%10;
	horitres = rand()%10;
	printf("treasure is at (%d,%d)\n",verttres,horitres);	

	while (vert!=verttres){
		while(hori!=horitres){
			printf("current posistion = (%d,%d)\n",vert,hori);
			hori++;

			
		}

		printf("current posistion = (%d,%d)\n",vert,hori);
		vert++;

	}

	printf("reached the treasure at (%d,%d)\n",vert,hori);

	return 0;
}

		

