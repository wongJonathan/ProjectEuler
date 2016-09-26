#include <stdio.h>

int main(){

	int sum = 0;
	int previousI = 0;
	int previousII = 0;
	
	for(int i = 1; i < 4000000;){
		
		if(i%2 == 0){
			sum += i;
		}
				
		printf("%d\n",i);

		previousII = previousI;
		previousI = i;
		i = previousI + previousII;
	}

	printf("Sum is: %d\n",sum);

	return 0;
}
