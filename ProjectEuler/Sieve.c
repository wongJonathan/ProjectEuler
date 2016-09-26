#include <stdio.h>

/*Sieve's Algorithim for Finding the Amount of Prime Numbers
  Within a Certain Range*/

int main(){

	int max = 13;
	int num = 0;
	int counter = 0;

	int list [max];
	list[0] = 0;
	list[1] = 0;

	for(int i = 2; i <= max; i++){
		if(list[i] != 1){
			list[i] = 2;
			for(int j = i * 2; j <= max; j+= i){
				list[j] = 1;
			}
			counter ++;
			num = i;
			printf("%d\n",i);
		}
	}

	printf("Highest Prime: %d\nNumber of Primes: %d\n",num,counter);	

	return 0;
}

