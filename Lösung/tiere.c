#include <stdio.h>
#include <string.h>
#include"aufgabe2_datentyp.c"

int read_tiere(tier *tiere, int anzahl);
void print_tiere(tier *tiere, int anzahl);

int main(int argc, char **argv){
	tier tiere[10];
	read(tiere, 10);
	printf("Name :%s\n",aeltest_tier(tiere,10).name);
}

int read_tiere(tier *tiere, int anzahl){
    char rasse[100];
    char name[100];
    int day;
    int month;
    int year;
    char art[20];

    int i = 0;
    while((scanf("%s %s %i %i %i %s", rasse, name, &day, &month, &year, art) != EOF) && i < anzahl){
        strcpy(tiere[i].rasse, rasse);
        strcpy(tiere[i].name, name);
        tiere[i].geburtstag.day = day;
        tiere[i].geburtstag.month = month;
        tiere[i].geburtstag.year = year;
        tiere[i].art = tierart_einlesen(art); 
        i++;
    }
    return i;
}

void print_tiere(tier *tiere, int anzahl){
    for(int i = 0; i < anzahl; i++){
        printf(" ***********************************************\n"
            " *  %s ist ein ein %s ", tiere[i].name, tiere[i].rasse);
        print_tierart(tiere[i].art); 
        printf(".\n *  Sein/Ihr Geburtstag ist am ");
        print_date(tiere[i].geburtstag);
    }
    printf(" ***********************************************\n");
}
