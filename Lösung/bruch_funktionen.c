#include<stdio.h>
#include"bruch.h"

// Ich hatte keine Zeit für diese Aufgabe. Das ist nur wie es ausehen könnte.

bruch product (bruch a, bruch b)
{
	bruch res = a * b;
	return res;
}
void kuerze(bruch* a)
{
	a /= ggt;
}

void print(bruch a){
    printf("(%.2f ,%.2f)",a.nenner,a.zaehler);
}
int ggt(int a, int b)
{
    int h;
    if (a == 0) return abs(b);
    if (b == 0) return abs(a);

    do {
        h = a % b;
        a = b;
        b = h;
    } while (b != 0);

    return abs(a);
}



