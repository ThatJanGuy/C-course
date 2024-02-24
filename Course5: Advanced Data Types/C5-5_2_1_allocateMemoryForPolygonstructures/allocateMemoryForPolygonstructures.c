#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    int vertices = 0;
    struct point * polygonPtr;

    scanf("%d", &vertices);
    polygonPtr = (struct point *) malloc(vertices * sizeof(struct point));
    initializePoly(polygonPtr, vertices);
    printPoly(polygonPtr, vertices);
    free(polygonPtr);

    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * polyPtr, int vertices){
    for (int i = 0; i < vertices; i++){
        polyPtr[i].x = -i;
        polyPtr[i].y = i*i;
    }
}