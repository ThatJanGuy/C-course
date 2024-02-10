#include <stdio.h>

int min(int, int);

int main(void){
    int noOfItems = 0;
    int smallestInt = 0;

    scanf("%d", &noOfItems);
    
    for (int i = 0; i < noOfItems; i++){
        int latestInt = 0;

        scanf("%d", &latestInt);

        if (i != 0){
            smallestInt = min(smallestInt, latestInt);
        } else {
            smallestInt = latestInt;
        }
    }
    printf("%d\n", smallestInt);
    return (0);
}

int min(int a, int b){
    if (a < b) return a;
    return b;
}