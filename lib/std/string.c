#include <stdlib.h>
#include <string.h>

void trim(const char *cs) {
    int char_count = strlen(cs) + 1;
    char *new_str = realloc(sizestrlen(cs) * char_count);
    return memcpy(new_str, cs, char_count)
}