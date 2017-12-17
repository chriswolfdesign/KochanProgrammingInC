/*
 * Exercise9_5.c
 *
 * Solution to Exercise 5 of Chapter 9 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

// Prototypes
struct dateAndTime getDateAndTime();
void displayDateAndTime(struct dateAndTime dat);
struct dateAndTime clockUpdate(struct dateAndTime now);
struct date dateUpdate(struct date);
int getDays(struct date d);
bool isLeapYear(struct date d);

// Structures
struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date d;
	struct time t;
};

int main(void)
{
	printf("Enter date and time (mm/dd/yyyy hh:mm:ss): ");
	struct dateAndTime now = getDateAndTime();

	struct dateAndTime next = clockUpdate(now);

	displayDateAndTime(next);

	return 0;
}

/*
 * A function to help us get the user's date and time
 *
 * param - void
 *
 * return struct dateAndTime - the date and time intended by the user
 */
struct dateAndTime getDateAndTime()
{
	struct dateAndTime now;
	scanf("%2i/%2i/%4i %2i:%2i:%2i", &now.d.month, &now.d.day, 
			&now.d.year, &now.t.hour, &now.t.minutes, &now.t.seconds);

	return now;
}

/*
 * A function to display a given dateAndTime structure
 *
 * param struct dateAndTime dat - the dateAndTime structure you wish 
 * 								  to display
 *
 * 	return void
 */
void displayDateAndTime(struct dateAndTime dat)
{
	printf("%.2i/%.2i/%.4i %.2i:%.2i:%.2i\n", dat.d.month, dat.d.day,
			dat.d.year, dat.t.hour, dat.t.minutes, dat.t.seconds);
}

/*
 * A function to update our dateAndTime struct by one second, adjusting
 * other fields as necessary
 *
 * param struct dateAndTime now - the dateAndTime struct to update
 *
 * return struct dateAndTime - the updated dateAndTime struct
 */
struct dateAndTime clockUpdate(struct dateAndTime now)
{
	now.t.seconds++;

	if(now.t.seconds == 60)
	{
		now.t.minutes++;
		now.t.seconds = 0;

		if(now.t.minutes == 60)
		{
			now.t.minutes = 0;
			now.t.hour++;

			if(now.t.hour == 24)
			{
				now.t.hour = 0;
				now.d = dateUpdate(now.d);
			}
		}
	}

	return now;
}

/*
 * HELPER - updates the date field of a dateAndTime struct
 *
 * param struct date d - the date to be updated
 *
 * reeturn date - the date after it has been updated
 */
struct date dateUpdate(struct date d)
{
	if(d.day == getDays(d))
	{
		d.day = 1;
		d.month++;

		if(d.month == 13)
		{
			d.month = 1;
			d.year++;
		}
	}
	else
	{
		d.day++;
	}

	return d;
}

/*
 * HELPER - returns the number of days in a given month
 *
 * param struct date d - the date for whom's month needs to be analyzed
 *
 * return int - the number of days in this month
 */
int getDays(struct date d)
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(isLeapYear(d) && d.month == 2)
	{
		/*
		 * Debug Code
		 */
		printf("It is a leap year.\n");
		/*
		 * End Debug Code
		 */
		return 29;
	}
	else
	{
		return days[d.month - 1];
	}
}

/*
 * HELPER - returns true if it is a leap year, false otherwsie
 *
 * param struct date d - the year to be analyzed
 *
 * return bool - true if leap year; else false
 */
bool isLeapYear(struct date d)
{
	if((d.year % 4 == 0 && d.year % 100 != 0) ||
			d.year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
