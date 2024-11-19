#include<stdio.h>
void main(){
	int i,num,fib;
	int a = 0,b = 1;
	printf("Enter the number of terms : ");
	scanf("%d",&num);
	printf("The fibonacci series upto %d numbers is : %d, %d, ",num,a,b);
	for(i = 3 ; i <= num ;++i){
		printf("%d, ",fib);
		a = b;
		b = fib;
		fib = a + b;
	}
}
