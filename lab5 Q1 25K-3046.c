#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	if (age >= 0 && age < 5){
		printf("Ticket is free");
	}
	else if (age >= 5 && age <= 65){
		printf("Standard ticket");
	}
	else if (age > 65){
		printf("Discount on Ticket");
	}
	else {
		printf("Invalid age");
	}
	
	return 0;
}
