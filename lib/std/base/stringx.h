#ifndef STRING_H_
#define STRING_H_

#include <stdlib.h>


void swap(char *a, char *b);


size_t strsize(const char *string);


char *trim(char *string);


char **split(const char *string, const char *separator, int *substring_count);


#endif
