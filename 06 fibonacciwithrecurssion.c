#include<stdio.h>
int fibonacci(int n);
void main(){
	int i,num,fib;
	int a = 0,b = 1;
	printf("Enter the number of terms : ");
	scanf("%d",&num);
	printf("The fibonacci series is :\n");
	for(i = 0 ; i < num ;++i){
		printf("%d, ",fibonacci(i));
	}
}
int fibonacci(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
