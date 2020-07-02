typedef enum{
    Informatik, Mathematik, Physik
}fach;

typedef struct{
    fach studiumfach;
    unsigned int semester :4;
    unsigned int noten :3;
    char *anmerkung;
}fragebogen;
