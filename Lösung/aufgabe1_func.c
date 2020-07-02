#include<stdio.h>
#include"aufgabe1.h"

void print_date(date d){
	printf("%i.%i.%i\n",d.day,d.month,d.year);
}
int is_before(date a, date b){
	if(a.year > b.year )
		return 1;
	if(a.year < b.year)
		return -1;
	if(a.month > b.month)
		return 1;
	if(a.month < b.month)
		return -1;
	if (a.day > b.day)
		return 1;
	if (a.day < b.day)
		return -1;
	return 0;
}
