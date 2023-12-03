/*
 * user_input.c
 *
 *  Created on: Dec 3, 2023
 *      Author: mm929
 */

#include "user_input.h"
#include "headerTypes.h"
#include <stdio.h>

extern unsigned char std_numbers;
extern student students_DB[100];

unsigned char getUserChoice()
{
	unsigned char choice;
	printf("-->> Enter your choice: ");
	fflush(stdout);
	scanf("%d", &choice);
	return choice;
}

void getStudentData(student *studentElem){
	do{
		printf("--> Enter student full name: ");
		fflush(stdout);
		scanf("%s", studentElem->std_fullName);
	}while(studentElem->std_fullName == "" || studentElem->std_fullName == " ");

		char tmp;
	do{
		printf("--> Enter student Gender( 'm'->male / 'f'->female ): ");
		fflush(stdout);
		scanf(" %c", &tmp);
	}while(tmp != 'm' && tmp != 'f');

	studentElem->std_gender = (tmp == 'm')? m: f;


	do{
		printf("--> Enter student Age: ");
		fflush(stdout);
		scanf("%d", &studentElem->std_age);
	}while(studentElem->std_age > 30);

	do{
		printf("--> Enter student StudyYear: ");
		fflush(stdout);
		scanf("%d", &studentElem->std_studyYear);
	}while(studentElem->std_studyYear > 5);

}


