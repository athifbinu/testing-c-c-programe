#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit=100,i;
	printf("Enter a number");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++){
		if(i%2==0){
			printf("%d\n\n",i);
		}
	}
	return EXIT_SUCCESS;
}
