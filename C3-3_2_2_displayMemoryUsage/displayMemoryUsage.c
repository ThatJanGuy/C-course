# include <stdio.h>

int getBytes(int, char);

int main(void){
    int byte = 0;
    int numberOfTypes;
    char type;

    // Just curiosity.
    // printf("int: %d\nshort: %d\nchar: %d\ndouble: %d\n", sizeOfInt, sizeOfShort, sizeOfChar, sizeOfDouble);

    scanf("%c %d", &type, &numberOfTypes);
    byte = getBytes(numberOfTypes, type);

    if (byte > 1000000){
        printf("%d MB and ", byte / 1000000);
        byte %= 1000000;
    }

    if (byte > 1000){
        printf("%d KB and ", byte / 1000);
        byte %= 1000;
    }

    printf("%d B\n", byte);

    return (0);
}

int getBytes(int number, char type){
    if (type == 'i') return (sizeof(int) * number);
    if (type == 's') return (sizeof(short) * number);
    if (type == 'c') return (sizeof(char) * number);
    if (type == 'd') return (sizeof(double) * number);
    return (1);
}