#include <stdlib.h>
#include <stdio.h>
#include "../lib/std/filesystem/fileio.h"


void partone(char **lines);


void parttwo(char **lines);


int main(int argc, char **argv) {
    int line_count;
    char **input;

    if (argc != 2) {
        printf("Please supply input file\n");
        exit(EXIT_FAILURE);
    }
    
    input = read_lines(argv[1], &line_count);
    if (input == NULL) {
        printf("Could not read input from %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    partone(input);
    parttwo(input);

    exit(EXIT_SUCCESS);
}


void partone(char **lines) {
    printf("Implement part one!\n");
}


void parttwo(char **lines) {
    printf("Implement part two!\n");
}
