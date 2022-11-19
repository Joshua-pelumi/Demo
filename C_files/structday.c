#include <stdio.h>
#include <stdbool.h> 

/**
 * main - calls other function
 * Programme that displays tomorrow's date
 *
 * (Takes into account end of month, end of year and even leapyear)
 *
 * @ struct date - structure to hold month,day and year
 * @daysPerMonth - structure to hold no. of days per Month
 *
 * Return - 0
 */

struct date
        {
        	int month;                                                   int day;
                int year;                                            };

int main(void)
{
	struct date today,tomorrow;
	int numberOfDays(struct date d);

	printf("Enter today's date(mm dd yyyy): ");
	scanf("%i%i%i", &today.month,&today.day,&today.year); 

	if(today.day != numberOfDays(today) )
		{
			tomorrow.month = today.month;
			tomorrow.day = today.day + 1;
			tomorrow.year = today.year;
		}

	else if( today.month == 12 ) //end of year
		{ 
			tomorrow.month = 1;                                          	      tomorrow.day = 1;
                        tomorrow.year = today.year +1;
                }

	else				//end of month
		{
			tomorrow.month = today.month + 1;
                        tomorrow.day = 1;
                        tomorrow.year = today.year;
		}

	printf("Tommorrow's date is %i %i %.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

}

	//Function to determine number of days

	int numberOfDays(struct date d)
	{
		int days;
		bool isLeapYear(struct date d);
		const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};

		if(isLeapYear(d) == true && d.month == 2)
			days = 29;
		else
			days = daysPerMonth[d.month -1];
	
		return days;
	} 

	//Function to determine if it's a leapyear
	
	bool isLeapYear(struct date d)
	{
		bool leapyearflag;

		if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
			leapyearflag = true; //It's a leap year
		else
			leapyearflag = false; //It's not a leap yea

		return leapyearflag; 

	return 0; 
	} 
	
