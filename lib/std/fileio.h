#ifndef FILEIO_H_
#define FILEIO_H_

int char_size(const char *p);

char *increase_size(const char *p);

char *read_file(const char *path);

char **read_lines(const char *path);

#endif