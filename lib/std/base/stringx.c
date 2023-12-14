#include <stdlib.h>
#include <string.h>


void swap(char *a, char *b) {
    char *temp = a;
    a = b;
    b = temp;
}


size_t strsize(const char *string) {
    return strlen(string) + 1;
}


char *trim(char *string) {
    return realloc(string, strsize(string) * sizeof(char));
}


char **split(const char *string, const char *separator, int *substring_count) {
    char **substrings;
    char *substring_start = strchr(string, string[0]);
    char *substring_end;
    size_t substring_length;
    int i;
    *substring_count = 0;
    while ((substring_start = strstr(substring_start, separator)) != NULL) {
         ++substring_count;
    }
    substring_start = strchr(string, string[0]);
    substrings = malloc(sizeof(char *) * *substring_count);
    for (i = 0; i < *substring_count; ++i) {
        substring_end = strstr(substring_start, separator);
        substring_length = (substring_end - substring_start + 1) / sizeof(char);
        substrings[i] = malloc(substring_length);
        substrings[i] = strncpy(substrings[i], substring_start, substring_length);
        swap(substring_start, substring_end);
    }
    return substrings;
}