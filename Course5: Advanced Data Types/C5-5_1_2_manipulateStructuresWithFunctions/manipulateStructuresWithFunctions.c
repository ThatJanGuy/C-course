#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date * dateptr){
    scanf("%d %d %d", &dateptr->year, &dateptr->month, &dateptr->day);
}

void printDate(struct date date){
    printf("%02d/%02d/%d\n", date.month, date.day, date.year);
}

struct date advanceDay(struct date date){

    // Advance day and return date if it's no special date.
    if (!(date.month == 2 && date.day == 28) && date.day < 30){
        date.day++;
        return date;
    }

    // Handles end-of-month situations, but not in February.
    if (date.day >= 30){
        int isLongMonth = 0;
        int longMonths[] = {1, 3, 5, 7, 8, 10, 12};

        for (int i = 0; i < sizeof(longMonths) / sizeof(int); i++){
            if (date.month == longMonths[i]){
                isLongMonth = 1;
            }
        }

        if (isLongMonth && date.day == 30){
            date.day++;
            return date;
        }

        date.day = 1;
        date.month++;
        if (date.month > 12){
            date.month = 1;
            date.year++;
        }
        return date;
    }

    // Handles end-of-month for February, incl leap years.
    if (date.month == 2 && date.day >= 28){
        int isLeapYear = 0;

        if (date.day == 29){
            date.day = 1;
            date.month++;
        }
        
        // Checks if year is leap year.
        /*
            Rules
            1) Divisible by 4
            2) Not divisible by 100
            3) Unless also divisible by 400
        */ 
        if (date.year % 4 == 0) {
            if (date.year % 100 == 0) {
                if (date.year % 400 == 0) {
                    isLeapYear = 1;
                }
            } else {
                isLeapYear = 1;
            }
        }

        if (isLeapYear){
            date.day++;
            return date;
        }

        date.day = 1;
        date.month++;
        return date;
    } 

    // Should never be reached. This is just here
    // to create a return that could be sorted out
    // as an error. But mainly to get rid of the compiler
    // warning.
    date.year = 9999;
    date.month = 99;
    date.day = 99;
    return date;
}