#include <stdio.h>

int main(void){
    int numberOfNames = 0;
    char firstName[101];
    char lastName[101];

    scanf("%d", &numberOfNames);

    for (int i = 0; i < numberOfNames; i++){
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }

    return (0);
}