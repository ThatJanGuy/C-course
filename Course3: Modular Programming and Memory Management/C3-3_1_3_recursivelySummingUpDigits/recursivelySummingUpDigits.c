# include <stdio.h>

int sumOfDigits(int);

int main(void){
    int sum = 0;
    int number = 0;

    scanf("%d", &number);

    sum = sumOfDigits(number);

    printf("%d\n", sum);

    return (0);
}

int sumOfDigits(int n){
    // Base case
    if (n < 10) return (n);
    // Next recursion utilising integer division
    return (n%10 + sumOfDigits(n/10));
}