#include <stdio.h>

int sumSizes(int, int, int);

int main(void){
    int noOfInputs = 0;
    int inputCorrect = 1;
    int sumOfBytes = 0;

    scanf("%d", &noOfInputs);

    for (int i = 0; i < noOfInputs; i++){
        int number = 0;
        char type;

        scanf("%d %c", &number, &type);

        if (type == 'i'){
            sumOfBytes += number * sizeof(int);
        } else if (type == 'd'){
            sumOfBytes += number * sizeof(double);
        } else if (type == 'c') {
            sumOfBytes += number * sizeof(char);
        } else {
            inputCorrect = 0;
        }
    }

    if (!inputCorrect){
        printf("Invalid tracking code type\n");
        return (1);
    }

    printf("%d bytes\n", sumOfBytes);

    return (0);
}