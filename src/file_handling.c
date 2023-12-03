/*
 * file_handling.c
 *
 *  Created on: Dec 3, 2023
 *      Author: mm929
 */


// file_handling.c
#include "file_handling.h"
#include "headerTypes.h"
#include <stdio.h>
extern unsigned char std_numbers;
extern student students_DB[100];


void readFromFile() {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        return;
    }

    std_numbers = 0;

    while (std_numbers < 100 && fscanf(file, "%[^,],%d,%u,%u\n",
            students_DB[std_numbers].std_fullName,
            (int*)&students_DB[std_numbers].std_gender,
            &students_DB[std_numbers].std_age,
            &students_DB[std_numbers].std_studyYear) == 4) {
        std_numbers++;
    }

    fclose(file);
}

void writeToFile() {
	printf("%d\n",std_numbers);
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (unsigned char i = 0; i < std_numbers; ++i) {
        fprintf(file, "%s,%d,%d,%d\n",
            students_DB[i].std_fullName,
            students_DB[i].std_gender,
            students_DB[i].std_age,
            students_DB[i].std_studyYear);
    }

    fclose(file);
}
