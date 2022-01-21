#include <iostream>
using namespace std;

int main(){
	int limit,i,a[100],sum=0;
	printf("Enter a limit");
	scanf("%d",&limit);
    printf("Enter a values");
    for(i=0;i<limit;i++){
    	scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
    	sum=sum+a[i];
    }

    printf("%d",sum);

	return 0;
}
