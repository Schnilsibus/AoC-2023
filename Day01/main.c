#include <stdlib.h>
#include <stdio.h>
#include "../lib/std/fileio.h"


void partone(char **lines);


void parttwo(char **lines);


int main(int argc, char **argv) {
    char *lines = NULL;

    if (argc != 2) {
        return -1;
    }

    printf("input: %s\n", argv[1]);
    lines = read_file(argv[1]);
    printf("%s", lines);

    return 0;
}


void partone(char **lines) {
    printf("implement part one!\n");
}


void parttwo(char **lines) {
    printf("implement part one!\n");
}
