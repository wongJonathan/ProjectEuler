#include <stdio.h>

#define BIGNUMB	10000000
int numbOfDivisors( int);

int main(){




	static int primeNumb[BIGNUMB-1];
	primeNumb[0] = 0;
	primeNumb[1] = 0;

	printf("test\n");
	for(int i = 0; i < BIGNUMB - 1; i++){

		if(primeNumb[i] != 0){	//1: is prime
			primeNumb[i] = 1;
			int j = 2;
			while( (i * j) < BIGNUMB){
				primeNumb[i * j] = 0;
				j++;
			}
		}

	} 
	int count = 0;
	for( int i = 2; i < (BIGNUMB-1); i ++){
		printf("I: %d\n",i);
		if(primeNumb[i] == primeNumb[i+1]){
			if(primeNumb[i] == 1)
				count ++;
			else if(numbOfDivisors(i) == numbOfDivisors(i+1)){
				count ++;
			}
		}
	}



	printf("Consecutive Postive Divisors: %d\n",count);
	
	return 0;
}

int numbOfDivisors( int num){
	int count = 2;

	for( int i = 2; i < num/2; i ++){
		if(num%i == 0){
			count ++;
		}
	}

	//printf("Count: %d\n",count);	
	return count;
}
