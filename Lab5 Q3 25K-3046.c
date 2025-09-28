#include <stdio.h>

int main(){
	
	float D, a, b, c;
	
	printf("Enter a:\n");
	scanf("%f", &a);
	printf("Enter b:\n");
	scanf("%f", &b);
	printf("Enter c:\n");
	scanf("%f", &c);
	
	D= b*b - 4*a*c;

	if (D > 0){
		printf("two real roots\n");
	}	
	else if (D = 0){
		printf("one real root\n");
	}
	else {
		printf("imaginary roots");
	}
	
	return 0;
}
