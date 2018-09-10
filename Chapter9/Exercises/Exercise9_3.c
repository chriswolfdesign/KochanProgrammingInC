/*
 * Exercise9_3.c
 *
 * Solution to Exercise 3 of Chapter 9 in Kochan's "Programming in C".
 *
 * Chris Wolf
 * chriswolfdesign@gmail.com
 */

#include <stdio.h>

// Declarations
struct time
{
	int hour;
	int minutes;
	int seconds;
};

// Prototypes
struct time get_time();
struct time elapsed_time(struct time t1, struct time t2);

int main(void)
{
	printf("Enter time 1 (hh:mm:ss): ");
	struct time t1 = get_time();

	printf("Enter time 2 (hh:mm:ss): ");
	struct time t2 = get_time();

	struct time difference = elapsed_time(t1, t2);
	printf("%.2i: %.2i: %.2i\n", difference.hour, difference.minutes, 
			difference.seconds);
	return 0;
}

/*
 * Returns a time entered by the user
 *
 * param - void
 *
 * return struct time - time entered by user
 */
struct time get_time()
{
	struct time new_time;
	scanf("%i:%i:%i", &new_time.hour, &new_time.minutes, &new_time.seconds);
	return new_time;
}

/*
 * Returns the amount of time elapsed by two given times
 *
 * param struct time t1 - the more recent time
 * param struct time t2 - the less recent time
 *
 * return struct time - the amount of time based between t1 and t2
 */
struct time elapsed_time(struct time t1, struct time t2)
{
	struct time new_time;

	new_time.hour = t1.hour - t2.hour;
	new_time.minutes = t1.minutes - t2.minutes;
	new_time.seconds = t1.seconds - t2.seconds;

	// Check for second role over
	if(new_time.seconds < 0)
	{
		new_time.seconds += 60;
		new_time.minutes--;
	}

	// Check for minute roll over
	if(new_time.minutes < 0)
	{
		new_time.minutes += 60;
		new_time.hour--;
	}

	// Check for crossing over midnight
	if(new_time.hour < 0)
	{
		new_time.hour += 24;
	}

	return new_time;
}
