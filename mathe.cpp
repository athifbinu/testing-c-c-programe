#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,choice,result;
	 printf("Enter a 2 number");
	 scanf("%d%d",&number1,&number2);
	 printf("1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n enter your choice ");
	 scanf("%d",choice);
	 if(choice==1){
		 result=number1+number2;

	 }else if ("choice==2"){
		 result=number1-number2;

	 }else if(choice==3){
		 result=number1*number2;

	 }else if(choice==4){
		 result=number1/number2;

	 }else{
		 printf("you hacked ");
	 }

	 printf("result=%d",result);



	return EXIT_SUCCESS;
}