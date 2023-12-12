#include <stdlib.h>
#include <string.h>


char *trim(char *cs) {
    int char_count = strlen(cs) + 1;
    return realloc(cs, sizeof(char) * char_count);
}
