#include <stdio.h>

int main(){

	int sum3 = 0;
	int sum5 = 0;
	int sum35 = 0;

	for(int i = 0; i  <= 1000/3; i ++){
		
		sum3 += 3*i;
	}

	for(int i = 0; i < 1000/5; i ++){
		sum5 += 5 * i;
	}

	for(int i = 0; i <= 1000/15; i ++){
		sum35 += 15 * i;
	}

	printf("%d\n%d\n%d\n",sum3,sum5,sum35);	

	printf("The answer is %d\n.",(sum3 + sum5 - sum35));
	return 0;
}
