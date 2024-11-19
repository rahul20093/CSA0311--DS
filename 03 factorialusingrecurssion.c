#include<stdio.h>
int factorial(int n);
void main(){
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	printf("The factorial of %d is %d",a,factorial(a));
	}
int factorial(int a){
	if (a > 1){
		return a*factorial(a-1);
	}
	else{
		return 1;
	}
}
