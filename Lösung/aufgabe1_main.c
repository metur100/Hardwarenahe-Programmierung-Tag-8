#include<stdio.h>
#include <string.h>
#include"aufgabe1_func.c"

void print_date(date d);
int is_before(date a, date b);

int main (int argc, char **argv)
{
	date a, b, d;

	printf("Tag: ");
	scanf("%d", &(d.day));
	printf("Monat: ");
	scanf("%d", &(d.month));
	printf("Jahr: ");
	scanf("%d", &(d.year));

	printf("Tag A: ");
	scanf("%d", &(a.day));
	printf("Monat A: ");
	scanf("%d", &(a.month));
	printf("Jahr A: ");
	scanf("%d", &(a.year));

	printf("Tag B: ");
	scanf("%d", &(b.day));
	printf("Monat B: ");
	scanf("%d", &(b.month));
	printf("Jahr B: ");
	scanf("%d", &(b.year));

	print_date(d);
	is_before(a, b);

	printf("%i \n", is_before(a, b));

	return 0;
}
