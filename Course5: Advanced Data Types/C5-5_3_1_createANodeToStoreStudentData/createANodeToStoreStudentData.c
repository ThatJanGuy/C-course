#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student * createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)
void copyAString(char*, char*, int);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

// Write your createStudent function here (and any other functions you see fit)
struct student * createStudent(char name[], int age){
    struct student * pointerToNewStudent = (struct student *) malloc(sizeof(struct student));
    copyAString(name, pointerToNewStudent->name, sizeof(pointerToNewStudent->name));
    pointerToNewStudent->age = age;
    pointerToNewStudent->next = NULL;

    return pointerToNewStudent;
}

void copyAString(char * pointerToSourceString, char * pointerToTargetString, int stringLength){
    for(int i = 0; i < stringLength; i++){
        pointerToTargetString[i] = pointerToSourceString[i];
    }
}