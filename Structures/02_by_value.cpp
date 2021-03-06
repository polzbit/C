#include "stdafx.h"
#include "stdbool.h"
typedef struct date date_t;

struct date {
	int day, month, year;
};

/* function by-value for date structure, function get 2 dates and return the earlier date.*/
date_t earlier_date(date_t d1, date_t d2) {
	if (d1.year < d2.year) return d1;
	if (d1.year > d2.year) return d2;
	if (d1.month < d2.month) return d1;
	if (d1.month > d2.month) return d2;
	return (d1.day < d2.day) ? d1 : d2;
}
/* function by-address for date structure, function get 2 dates and return true if pd1 before pd2.*/
bool before(date_t* pd1, date_t* pd2) {
	if ((pd1->year < pd2->year)|| (pd1->year==pd2->year) && (pd1->month<pd2->month) || (pd1->month==pd2->month) && (pd1->day<pd2->day) || (pd1->day == pd2->day)){
		return true;
	}
	return false;
}
void main() {

}