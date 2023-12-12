#include <stdio.h>
#include <stdlib.h>
#include "string.h"


#define SIZE_STEP 256


char *read_file(const char *path) {
    FILE *fp = fopen(path, "r");
    char *buffer = malloc(sizeof(char) * SIZE_STEP);
    int current_buffer_size = SIZE_STEP;
    int buffer_index = 0;
    char c;

    printf("path: %s\n", path);
    printf("fp: %p\n", (void *) fp);

    if (fp == NULL) {
        printf("fopen fail\n");
        return NULL;
    }

    while ((c = fgetc(fp)) != EOF) {
        if (buffer_index + 1 > current_buffer_size - 1) {
            current_buffer_size += SIZE_STEP;
            buffer = realloc(buffer, current_buffer_size);
            if (buffer == NULL) {
                return NULL;
            }
        }
        buffer[buffer_index] = c;
        ++buffer_index;
    }
    fclose(fp);
    buffer[buffer_index] = '\0';
    buffer = trim(buffer);
    return buffer;
}


char **read_lines(const char *path) {
    return NULL;
}
