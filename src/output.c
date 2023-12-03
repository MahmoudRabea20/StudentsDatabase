/*
 * displayMenu.c
 *
 *  Created on: Dec 3, 2023
 *      Author: mm929
 */
#include <stdio.h>
#include "output.h"
#include "headerTypes.h"

extern unsigned char std_numbers;
extern student students_DB[100];


void displayMenu(){
	printf("#####################################################\n");
	printf("### 1- Add new student data.                      ###\n");
	printf("### 2- Delete existing student using student id.  ###\n");
	printf("### 3- Display all students.                      ###\n");
	printf("### 4- Exit program.                              ###\n");
	printf("#####################################################\n");
	fflush(stdout);
}


void displayAllStudents(){
	if(std_numbers == 0){
		printf("there is no student saved !!");
		fflush(stdout);
		return;
	}

	printf("| ID | student name | Gender | Age | Study Year |");
	for(unsigned char i = 0; i<std_numbers ; i++){
		printf("| %d | %s | %s | %d | %d |",i, students_DB[i].std_fullName, ((students_DB[i].std_gender == m)?"Male":"Female"), students_DB[i].std_age, students_DB[i].std_studyYear);
		fflush(stdout);
	}
}


