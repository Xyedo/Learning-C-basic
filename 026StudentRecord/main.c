//
// Created by ACER on 28/05/2022.
//
#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint32_t rollNumber;
    uint8_t studentSemester;
    uint32_t DOB;
    uint8_t studentBranch[30];
    uint8_t studentName[30];

} STUDENT_INFO_t;

STUDENT_INFO_t students[10];

uint8_t createNewRecord(STUDENT_INFO_t *ptrStudent, uint8_t len);

uint8_t deleteExistingRecord(uint8_t *studentPtr);

int8_t checkRollNumber(uint32_t rollNumber, uint8_t max);

void userSelection(int8_t const *userSelect);

void displayStudentRecord(STUDENT_INFO_t const *records, uint8_t const *studentLen);

void displaySelection(void);

int main(void) {
    printf("Student record management program\n");
    displaySelection();
    fflush(stdout);
    int8_t userSelect =0;
    uint8_t ptrOfStudent = 0;
    while (1) {
        userSelection(&userSelect);
        if (userSelect == 0) {
            break;
        }
        if (userSelect == 1) {
            displayStudentRecord(students, &ptrOfStudent);
            displaySelection();
            continue;
        }
        if (userSelect == 2) {
            STUDENT_INFO_t newStudent;
            uint8_t status = createNewRecord(&newStudent, ptrOfStudent);
            if (status == 0) continue;
            students[ptrOfStudent] = newStudent;
            ptrOfStudent++;
            displaySelection();
            continue;
        }
        if (userSelect == 3) {
            deleteExistingRecord(&ptrOfStudent);
            displaySelection();
            continue;
        }
    }


    return 0;
}

void displaySelection(void) {
    printf("Display all records -->1\n");
    printf("Add a new record -->2\n");
    printf("Delete a record -->3\n");
    printf("Exit application -->0\n");
}

uint8_t deleteExistingRecord(uint8_t *const studentPtr) {
    uint32_t rollNumber;
    printf("Delete Existing Record\n");
    printf("Enter a Roll number to delete :");
    scanf("%i", &rollNumber);
    int8_t status = checkRollNumber(rollNumber, *studentPtr);
    if (status == -1) {
        printf("\nStudent record of %i is not found\n", rollNumber);
        return 0;
    }
    for (int8_t i = status; i < 10; i++) {
        students[i] = students[i + 1];
    }
    printf("Deletion of Student Record with Roll number %i is success\n", rollNumber);
    *studentPtr = *studentPtr - 1;
    return 1;
}

uint8_t createNewRecord(STUDENT_INFO_t *const ptrStudent, uint8_t len) {
    printf("Create a New Record\n");
    printf("Enter the rollNumber: ");
    scanf("%i", &ptrStudent->rollNumber);
    getchar();

    if (checkRollNumber(ptrStudent->rollNumber, len) != -1) {
        printf("Roll number already exist\n");
        printf("Record add unsuccessfull\n");
        return 0;
    }

    printf("\nEnter student Name :");
    scanf("%[^\n]s", ptrStudent->studentName);
    printf("\nEnter student DOB (dd/mm/YYYY): ");
    scanf("%d", &ptrStudent->DOB);
    getchar();
    printf("\nEnter a student Branch :");
    scanf("%[^\n]s", ptrStudent->studentBranch);
    getchar();
    printf("\nEnter a semester: ");
    scanf("%u", &ptrStudent->studentSemester);
    getchar();
    return 1;
}

int8_t checkRollNumber(uint32_t const rollNumber, uint8_t max) {
    for (uint8_t i = 0; i <= max; i++) {
        if (students[i].rollNumber == rollNumber)
            return (int8_t) i;
    }
    return -1;
}

void userSelection(const int8_t *const userSelect) {
    while (1) {
        printf("Enter your option here: ");
        scanf("%i",&*userSelect);
        if (*userSelect < 0 || *userSelect > 3) {
            printf("\ntheres no selection in your number of choice!\n");
            continue;
        }
        break;
    }
}

void displayStudentRecord(STUDENT_INFO_t const *const records, uint8_t const *const studentLen) {
    printf("Display a student Record\n");
    if (*studentLen == 0) {
        printf("No record found\n");
        return;
    }
    for (int i = 0; i < *studentLen; i++) {
        printf("\n--student of %i--\n", records[i].rollNumber);
        printf("Name : %s\n", records[i].studentName);
        printf("Day of Birth: %d\n", records[i].DOB);
        printf("branch : %s\n", records[i].studentBranch);
        printf("Semester : %i\n", records[i].studentSemester);
    }
}