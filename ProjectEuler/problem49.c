#include <stdio.h>
#include <stdlib.h>

int main(){

	int number = 10000;
	int *numbers,*primes,i,j=0;
	int perm[4], permCount;

	numbers = malloc((number - 1000) * sizeof(int));
	primes = malloc((number - 1000) * sizeof(int));

	for(i = 1000; i < number; i++){
		numbers[i] = 0;
	}

	for(i = 1000; i < number; i++){

		if(numbers[i] == 0){
			primes[j] = i;
			j++;
			for(int k = i; k < number; k+=i){

				numbers[k] = 1;
			}
		}
	}
	


	for(i = 0; i < j; i++){
		for(int k = 0; k < 24; k++){
			
			int checkN;
			if(checkN%2 != 0){
				for(int l = i; l < j; l++){
					if(checkN == primes[l]){
						perm[permCount] = checkN;
						permCount++;
					}
				}
				if(permCount == 4){
					printf("%d%d%d%d\n",perm[0],perm[1],perm[2],perm[3]);
					return 0;
				}
			}
		}
	}

	free(numbers);
	free(primes);

	return 0;
}
