#include <stdio.h>

int main(){
	
	int hasPrerequisite, isCoursefull;
	
	printf("Do you have the prerequisite: 1=Yes, 0=No:\n");
	scanf("%d", &hasPrerequisite);
	printf("Is course full? 1=Yes, 0=No:\n");
	scanf("%d", &isCoursefull);
	
	if (hasPrerequisite == 1){
		if (isCoursefull == 0){
			printf("Enrolled Successfully");
		}
		else {
			printf("Cannot enroll: course is full");
		}
	}
	else {
		if (isCoursefull == 0) {
			printf("Cannot enroll: prerequisite missing");
		}
		else {
			printf("Cannot enroll: prerequisite missing and course is full.");
		}
	}
	return 0;
}
