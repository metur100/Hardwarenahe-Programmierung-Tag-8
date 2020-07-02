typedef struct{
	int day;
	int month;
	int year;
} date;

void print_date(date d);
int is_before(date a, date b);
