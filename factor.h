#ifndef _FACTOR_H
#define _FACTOR_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* size_t geline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buffer);

#endif /* FACTOR_H */
