#include "bruch.h"

// checkmk bruch_tests.ts > bruch_tests.c
// gcc bruch.c bruch_tests.c -o tests -Wall -lm -lpthread -lrt -lcheck -lsubunit -std=c99 -g -fprofile-arcs -ftest-coverage

#test product_kuerzen
    bruch a = { .zaehler = 10, .nenner = 5};
    bruch b = { .zaehler = 2, .nenner = 3};
    bruch c = product(a, b);
    ck_assert_int_eq(c.zaehler, 4);
    ck_assert_int_eq(c.nenner, 3);

#test product_nicht_kuerzen
    bruch a = { .zaehler = 3, .nenner = 5};
    bruch b = { .zaehler = 7, .nenner = 11};
    bruch c = product(a, b);
    ck_assert_int_eq(c.nenner, a.nenner*b.nenner);
    ck_assert_int_eq(c.zaehler, a.zaehler*b.zaehler);

#test kuerze_einfaches_vielfaches
    bruch a = { .zaehler = 15, .nenner = 5};
    kuerze(&a);
    ck_assert_int_eq(a.nenner, 1);
    ck_assert_int_eq(a.zaehler, 3);
   
#test kuerze_gemeinsame_primfaktoren
    bruch a = { .zaehler = 6, .nenner = 14};
    kuerze(&a);
    ck_assert_int_eq(a.nenner, 7);
    ck_assert_int_eq(a.zaehler, 3);

