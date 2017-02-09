#pragma once
#include <stdbool.h>

/* String comparison where one string may be NULL to specify wildcard */

/* String is NULL or empty */
bool streq_empty(const char *s);

/* Strings are equal */
bool streq(const char *a, const char *b);

/* Left string is empty or strings are equal */
bool streq_wl(const char *wa, const char *b);

/* Either string is empty or strings are equal */
bool streq_w(const char *wa, const char *wb);
