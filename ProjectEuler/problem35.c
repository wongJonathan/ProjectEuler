#include <stdio.h>
#include <stdlib.h>

typedef struct Prime{
	int num;
	Prime *next;
} Prime;

///
///
/// @return: 0 is circular; 1 is not

int isCircular(Prime *prime, int num){

	int len;
	int lenNum = num;

	while(lenNum > 1){
		lenNum /= 10;
		len ++;
	}

	for( int i = 0; i < len; i++){
		int checkNum =
		

	return 0;
}


/*
	Idea of this was to generate all prime numbers from 1 to 1 million,
	from that check each one that is circular

	*I guess it would help if we held all those in an array list instead of using pointers,
	this way don't have to check the duplicates.

*/

int main(){
	
	int count = 0;
	int mil = 1000000;

	int numList[mil];

	Prime *primeNum = malloc(sizeof(Prime));
	
	int i = 0;
	for(i = 0; i < mil; i++){
		if(i == 1 || i == 0)
			numList[i] = 1;	//1: is not going to be added
		numList[i] = 0;
	}
	
	i = 0;
	int j = 0;
	while(i < mil){

		j = 2;
		if(numList[i] == 0){
			Prime *new;
			new->num = i;
			new->next = primeNum->next;
			primeNumb->next = new;

			while( (i * j) < mil){
				numList[i * j] = 1;
				j++;
			}
		}

		i++;
	}

	for(i = 0; i < mil;i++){
		if(isCircular(num)){
			count ++;
		}
	}

	printf("Circular primes: %d\n",count);


	return 0;
}
