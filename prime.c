#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=10,i,flag=0,n;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
		}
	}
	
	if(flag==0){
		printf("It is a prime number");
	}
	else{
		printf("it is not prime");
	}
		
	

	return EXIT_SUCCESS;
}