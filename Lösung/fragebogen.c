#include <stdio.h>
#include <string.h>
#include"fragebogen.h"

fach bestimme_fach(int fach);
void print(fragebogen a);

int main(){
    unsigned int fach = 0;
    unsigned int semester = 0;
    unsigned int note;
    char anmerkung[120];

    printf("Welches Fach studieren Sie? (1: Informatik, 2: Mathematik, 3: Physik)\n");
    scanf("%i", &fach);
    while(getchar() != '\n');
    
    printf("In welchem Fachsemester studieren Sie? (1-12)\n");
    scanf("%i", &semester);
    while(getchar() != '\n');

    printf("Bitte benoten Sie Ihre Übung in Schulnoten. (1-6)\n");
    scanf("%i", &note);
    while(getchar() != '\n');

    printf("Haben Sie weitere Anmerkungen?\n");
    fgets(anmerkung, 120, stdin);

    fragebogen fragebogen1 = {bestimme_fach(fach), semester, note, anmerkung};
    print(fragebogen1);
}
fach bestimme_fach(int fach){
    if(fach == 1)
       return Informatik;
    if(fach == 2)
       return Mathematik;
    if(fach == 3)
       return Physik;
}

void print(fragebogen a){
    if(a.studiumfach == Informatik){
       printf("Fach : Informatik");
    }
    if(a.studiumfach == Mathematik){
       printf("Fach : Mathematik");
    }
    if(a.studiumfach == Physik){
       printf("Fach : Physik");
    }
    printf(" Semester:%i Noten: %i Anmerkung: %s\n",a.semester,a.noten,a.anmerkung);
}


