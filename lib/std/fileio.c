#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define SIZE_STEP 256

int char_size(const char *cs) {
    return sizeof(cs) / sizeof(char);
}

char *increase_size(char *cs) {
    return realloc(cs, sizeof(cs) + sizeof(char) * SIZE_STEP);
}

char *read_file(const char *path) {
    FILE *fp = fopen(path, "r");
    char *content = malloc(sizeof(char) * SIZE_STEP);
    int char_count = 0;
    int current_size = sizeof(content) / sizeof(char);
    char c;

    if (fp == NULL) {
        return NULL;
    }

    while ((c = fgetc(fp)) != EOF) {
        if (char_count + 1 > current_size - 1) {
            if ((content = increase_size(content)) == NULL) {
                return NULL;
            }
            current_size = char_size(content);
        }
        content[char_count] = c;
        ++char_count;
    }
    fclose(fp);
    content[char_count] = '\0';
    trim(content);
    return content;
}

char **read_lines(const char *path) {
    char *content = read_file(path);
    return NULL;
}