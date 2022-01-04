
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=10,i;
	for(i=2;i<=limit;i++){
		if(i%2==0){
			printf("%d\n\n",i);
		}
	}
	return EXIT_SUCCESS;
}