#include <stdio.h>
#include "bruch.h"

int main () {
    bruch a, b;

    printf("Geben Sie den Zähler von Bruch a ein: ");
    scanf("%d", &(a.zaehler));
    printf("Geben Sie den Nenner von Bruch a ein: ");
    scanf("%d", &(a.nenner));

    printf("Geben Sie den Zähler von Bruch b ein: ");
    scanf("%d", &(b.zaehler));
    printf("Geben Sie den Nenner von Bruch b ein: ");
    scanf("%d", &(b.nenner));

    printf("Bruch a lautet ");
    print(a);
    puts("");

    printf("Bruch b lautet ");
    print(b);
    puts("");

    printf("Der Wert von Bruch a ist ");
    wert(a);
    puts("");
    printf("Der Wert von Bruch b ist ");
    wert(b);
    puts("");
    printf("Das Produkt der beider Brüche lautet ");
    print(product(a, b));
    puts("");

    printf("Der gekürzte Bruch a lautet: ");
    kuerze(&a);
    print(a);
    puts("");

    return 0;
}
