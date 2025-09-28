#include <stdio.h>
#include <string.h>

int main(){
	
	int password;
	char username[20];
	int correctpass = 2345;
	char correctuser[20] = "Guest";
	
	printf("Enter username:\n");
	scanf("%s", &username);
	
	if (strcmp(username,correctuser)==0){
		
		printf("Enter password:\n");
		scanf("%d", &password);
		
		if (password == correctpass){
			printf("Login verified\n");
		}
		else {
			printf("Incorrect password\n");
		}	
	}
	else {
		printf("Username not found");
	}
	return 0;
}
