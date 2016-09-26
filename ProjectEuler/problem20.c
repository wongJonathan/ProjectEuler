#include <stdio.h>

int main(){

	int num = 100;

	unsigned long long total = 2;

	for(unsigned long long i = 3; i <= num; i++){
		total = i * total;
	printf("Total: %llu\n",total);
	}
	
	printf("Total: %llu\n",total);

	long sum = 0;	

	while(total > 0){

		sum += total%10;
		total = total/10;
	}

	printf("Sum: %ld\n",sum);

	return 0;
}
