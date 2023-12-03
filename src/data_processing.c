/*
 * data_processing.c
 *
 *  Created on: Dec 3, 2023
 *      Author: mm929
 */
#include "data_processing.h"
#include "headerTypes.h"
#include "file_handling.h"
#include "user_input.h"
#include <stdio.h>

extern unsigned char std_numbers;
extern student students_DB[100];


void addStudent(){
	if((std_numbers+1) >= 100){
		printf("Database is Full.\n");
		return;
	}

	getStudentData(&students_DB[std_numbers]);
//
//	printf("%s\n",students_DB[std_numbers].std_fullName);
//	printf("%d\n",students_DB[std_numbers].std_gender);
//	printf("%d\n",students_DB[std_numbers].std_age);
//	printf("%d\n",students_DB[std_numbers].std_studyYear);

	std_numbers++;
	writeToFile();

}

void deleteStudent(unsigned char std_idx) {

}

