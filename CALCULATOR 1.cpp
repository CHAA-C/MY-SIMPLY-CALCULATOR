#include<stdio.h>

int main(){
	int num1,num2;
	char op;
	printf("Enter a number: ");
	scanf("%d",&num1);
	printf("Enter an operator: ");
	scanf(" %c",&op);
	printf("Enter a number: ");
	scanf("%d",&num2);
	
	if(op == '+'){
		printf("Your answer is: %d ",num1+num2);
	} else if(op == '-'){
		printf("Your answer is: %d ",num1-num2);
	} else if(op == '/'){
		printf("Your answer is: %d ",num1/num2);
	} else if(op == '*'){
		printf("Your answer is: %d ",num1*num2);
	} else{
		printf("Wrong operator");
	}
	return 0;
}
