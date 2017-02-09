#include <string.h>
#include "wildstr.h"

bool streq_empty(const char *s)
{
	return s == NULL || *s == 0;
}

bool streq(const char *a, const char *b)
{
	return strcmp(a, b) == 0;
}

bool streq_wl(const char *wa, const char *b)
{
	return streq_empty(wa) || streq(wa, b);
}

bool streq_w(const char *wa, const char *wb)
{
	return streq_empty(wa) || streq_empty(wb) || streq(wa, wb);
}
