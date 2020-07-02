#include"date.h"

typedef enum{
	Katze, Hund
}tierart;

typedef struct{
	date geburtstag;
	tierart art;
	char rasse[100];
	char name[100];
}tier;

int read_tiere(tier *tiere, int anzahl);
void print_tiere(tier *tiere, int anzahl);

tier aeltest_tier(tier *tiere,int anzahl){
	tier aeltest = tiere[0];
	for(int i =1; i<anzahl; i++){
		if(is_before(tiere[i].geburtstag , aeltest.geburtstag)==-1)
			aeltest = tiere[i];
	}
	return aeltest;
}
tierart tierart einlesen(char* eingabe){
	if(strcmp(eingabe,"Katze")==0)
		return Katze;
	return Hund;
}
void print tierart(tier *t){
	printf("%i.%i.%i\n",t.geburtstag,t.art, t.rasse,t.name);
}
