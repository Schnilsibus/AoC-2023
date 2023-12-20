#include <stdio.h>
#include <stdlib.h>
#include "..\base\stringx.h"


#define SIZE_STEP 256


char *read_file(const char *path) {
    FILE *fp = fopen(path, "r");
    char *buffer = malloc(sizeof(char) * SIZE_STEP);
    int current_buffer_size = SIZE_STEP;
    int buffer_index = 0;
    char c;

    if (fp == NULL) {
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


char **read_lines(const char *path, int *line_count) {
    char *file_string = read_file(path);
    char **lines = split(file_string, "\n", line_count);
    free(file_string);
    return lines;
}
