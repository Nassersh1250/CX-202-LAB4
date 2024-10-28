#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){


	float image[10][10];
	int rval;
	int gval;
	int bval;
	float grval;
	srand(time(NULL));

	for (int i = 0; i<10; i++){
		for (int j = 0; j<10; j++){
			rval = rand()%256;
			gval = rand()%256;
			bval = rand()%256;

			grval = 0.299*rval+0.587*gval+0.114*bval;

			image[i][j] = grval;

			printf("The pixel at position (%d,%d) had RGB values of (%d,%d,%d) and greyscale value of (%f)\n",i,j,rval,gval,bval,grval);
		}
	}

	return 0;
}

