#include <stdio.h>

int main(){

#define square(x)	(x)*(x)
	

	int sum = 0;
	int square = 0;

	for(int i = 1; i <= 100; i++){
		sum += square(i);
		square += i;
	}

	square = square(square);

	printf("%d", square-sum);

	return 0;
}


