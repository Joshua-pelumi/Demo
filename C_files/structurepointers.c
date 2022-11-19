#include <stdio.h>

/**
 * z
 *
 * 
 */

//pointers to structures

struct time
{
	int seconds;
	int minutes;
	int hours;
};  

//structure containing pointers

struct intPtrs
{
	int *p1;
	int *p2;
};  

int main(void)
{ 
	int s,m,h;
	struct time todayTime, *updateTime;
	struct intPtrs pointers;
	int li = 200, l2;

	updateTime = &todayTime;

	(*updateTime).seconds = 46;
	s = (*updateTime).seconds;

	updateTime->minutes = 20;
	m = updateTime->minutes;

	todayTime.hours = 18;
	h = todayTime.hours;

	printf("Time is %.2ihr %.2imin %.2isecs\n", h,m,s);

	pointers.p1 = &li;
	printf("%i \n ", *pointers.p1);

	pointers.p2 = &l2;
	*pointers.p2 = -156;

	printf("%i \n", l2);

	return 0;

}

