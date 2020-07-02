
// TODO Importieren Sie hier Ihre header-Datei!

// checkmk date_tests.ts > date_tests.c
// gcc TODO.c date_tests.c -o tests -Wall -lsubunit -lm -lpthread -lrt -lcheck -Wall -std=c99 -g -fprofile-arcs -ftest-coverage

#test date_is_equal
    date a = // TODO Hier folgendes Datum verwenden: 6.12.2012
    date b = // TODO Hier folgendes Datum verwenden: 6.12.2012
    ck_assert_int_eq(is_before(a, b), 0);
    ck_assert_int_eq(is_before(b, a), 0);
    
#test date_is_before
    date a = // TODO Hier folgendes Datum verwenden: 6.11.2016
    date b = // TODO Hier folgendes Datum verwenden: 7.12.2017
    ck_assert_int_eq(is_before(a, b), -1);
    ck_assert_int_eq(is_before(b, a), 1);

#test date_is_before_equal_year
    date a = // TODO Hier folgendes Datum verwenden: 6.11.2017
    date b = // TODO Hier folgendes Datum verwenden: 7.12.2017
    ck_assert_int_eq(is_before(a, b), -1);
    ck_assert_int_eq(is_before(b, a), 1);

#test date_is_before_equal_year_and_month
    date a = // TODO Hier folgendes Datum verwenden: 6.12.2017
    date b = // TODO Hier folgendes Datum verwenden: 7.12.2017
    ck_assert_int_eq(is_before(a, b), -1);
    ck_assert_int_eq(is_before(b, a), 1);
