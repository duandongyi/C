#include "hello_world.h"

#include <stdlib.h>
#include <string.h>

const char *hello(void)
{
    char *ans = strdup("Hello, duandongyi World!");
    /* string is pointer of the first character */
    return ans;
}
