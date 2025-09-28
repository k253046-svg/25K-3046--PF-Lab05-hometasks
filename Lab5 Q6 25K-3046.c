#include <stdio.h>

int main(){
	char room, action;
	printf("Which room? L=Living Room, K=Kitchen:\n");
	scanf(" %c", &room);
	printf("What action? L=Lights, T=Thermostat:\n");
	scanf(" %c", &action);

	switch (room){
		case 'L':
		case 'l':
			switch (action){
				case 'L':
				case 'l':
					printf("Adjusting ambient lighting\n"); break;
				case 'T':
				case 't':
					printf("Setting living room temperature\n"); break;	
				default:
					printf("Invalid Command");
			}
		break;	
		case 'K':
		case 'k':
			switch (action){
				case 'L':
				case 'l':
					printf("Turning on bright task lighting\n"); break;
				case 'T':
				case 't':
					printf("Setting kitchen temperature\n"); break;	
				default:
					printf("Invalid Command");	
			}
		break;		
	}
	return 0;
}
