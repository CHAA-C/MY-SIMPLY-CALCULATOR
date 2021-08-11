#include<stdio.h>

int main(){
	int num1,num2;
	char op;
	printf("Enter your operator(+,-,*,/): ");
	scanf(" %c",&op);
	
	printf("Enter your two number one by one: ");
	scanf("%d %d",&num1,&num2);
	
	switch(op){
		case '+':
			printf("Your answer is: %d",num1+num2);
			break;
		case '-':
			printf("Your answer is: %d",num1-num2);
			break;
		case '/':
			printf("Your answer is: %d",num1/num2);
			break;
		case '*':
			printf("Your answer is: %d",num1*num2);
			break;
		default:
			printf("Wrong operator");
			break;
		}
		return 0;
}
