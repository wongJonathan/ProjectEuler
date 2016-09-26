#include <stdio.h>

int main(){
	
	int counter = 0;
	int i = 1;

	while(counter != 10001){
	
		i ++;
		counter += IsPrime(i);
	
	}

	printf("%d\n", i);

	return 0;
}

int IsPrime(int x){

	for(int i = 2; i < x; i++){
		if(x%i == 0 && x != i){
			return 0;
		}
	}

	return 1;
}
