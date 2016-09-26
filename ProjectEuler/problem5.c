#include <stdio.h>

int main(){

	int num = 0;

	typedef enum { false, true } bool;

	bool found = false;	

	while(found == false){
		num += 1;

		found = true;		

		for(int i = 1; i <= 20; i ++){
			if(num%i != 0){
				found = false;
				break;
			}
		}
	}

	printf("%d\n",num);

	return 0;
}
