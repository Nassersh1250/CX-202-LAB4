#include <stdio.h>
#include <unistd.h>
int main(){

	int s=0;
	int min=0;
	int sw=0;
	printf("enter number of minutes\n");
	scanf("%d",&sw);

	while(min<sw){
		while (s>59){
			min++;
			s-=60;
		}
		printf("%d:",min);
		printf("%d\n",s);
		s++;
		sleep(1);
}
	return 0;

}
