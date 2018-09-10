/*
 * Exercise9_2.c
 *
 * Solution to Exercise 2 of Chapter 9 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// structures
struct date
{
    int month;
    int day;
    int year;
};

// prototypes
struct date getDate();
int daysPassed(struct date date1, struct date date2);
int convertToDays(struct date d);
int getYearInfo(struct date d);
int getMonthInfo(struct date d);

int main(void)
{
    printf("Enter date 1 (mm/dd/yyyy): ");
    struct date date1 = getDate();

    printf("Enter date 2 (mm/dd/yyyy): ");
    struct date date2 = getDate();

    printf("%i\n", daysPassed(date1, date2));

    return 0;
}

/*
 * Returns a date entered by the user
 *
 * param - void
 *
 * return struct date - date entered by the user
 */
struct date getDate()
{
    struct date d;

    scanf("%2i/%2i/%4i", &d.month, &d.day, &d.year);

    return d;
}

/*
 * Returns the number of days that have elapsed between two dates
 *
 * param struct date date1 - the more recent date to be compared
 * param struct date date2 - the less recent date to be compared
 *
 * return int - the number of days that passed since date1 and date2
 */
int daysPassed(struct date date1, struct date date2)
{
    int date1days = convertToDays(date1);
    int date2days = convertToDays(date2);

    return date1days - date2days;
}

/*
 * HELPER -- daysPassed
 * Converts a date to a number of days
 *
 * param struct date d - the date to be converted to days
 *
 * return int - the number of days converted from the date
 */
int convertToDays(struct date d)
{
    int yearInfo = getYearInfo(d);
    int monthInfo = getMonthInfo(d);

    return 1461 * yearInfo / 4 + 153 * monthInfo / 5 + d.day;
}

/*
 * HELPER -- convertToDays
 *
 * param struct d - the date to get info from
 *
 * return int - necessary piece of formula for convertToDays
 */
int getYearInfo(struct date d)
{
    if(d.month <= 2)
    {
        return d.year - 1;
    }
    else
    {
        return d.year;
    }
}

/*
 * HELPER -- convertToDays
 *
 * param struct d - the date to get info from
 *
 * return int - necessary piece of formula for convertToDays
 */
int getMonthInfo(struct date d)
{
    if(d.month <= 2)
    {
        return d.month + 13;
    }
    else
    {
        return d.month + 1;
    }
}
