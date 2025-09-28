#include <stdio.h>

int main(){
	
	int powerOn;
	char LightColor;
	printf("Enter 1 if power is on, enter any other key if off:\n");
	scanf("%d", &powerOn);
	
	if (powerOn == 1){
		printf("Enter light color, R: red, Y: yellow, G: green\n:");
	    scanf(" %c", &LightColor);
		switch (LightColor){
			case 'R':
			case 'r':	
				printf("Stop"); break;
			case 'Y':
			case 'y':	
			    printf("Caution"); break;
			case 'G':
			case 'g':	
			    printf("Go"); break;
			default:
			    printf("Invalid color");			
		}
	}
	else {
		printf("Signal Off");
	}
	
	return 0;
}
