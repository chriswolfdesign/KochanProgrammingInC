/*
 * Exercise9_4.c
 *
 * Solution to Exercise 4 of Chapter 9 in Kochan's "Programming in C".
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
void display_day(int days);
int convertToDays(struct date d);
int getYearInfo(struct date d);
int getMonthInfo(struct date d);

int main(void)
{
    printf("Enter date 1 (mm/dd/yyyy): ");
    struct date date = getDate();

	display_day(convertToDays(date));

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
 * Displays a day of the week based on a date, converted to number of days
 *
 * param int - the date that has been converted into number of days
 *
 * return void
 */
void display_day(int days)
{
	int weekday = (days - 621049) % 7;

	switch(weekday)
	{
		case 0:
			printf("Sunday\n");
			break;
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
	}
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
