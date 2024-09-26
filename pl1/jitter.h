#ifndef JITTER_H
#define JITTER_H

#include <time.h>

#include "utils.h"

struct jitter_t
{
    size_t num;
    double sum;
    double sum_of_squares;
};

void jitter_init(struct jitter_t *s);
void jitter_add_datapoint(struct jitter_t *s, struct timespec *t);
double jitter_get(struct jitter_t *s);

#endif
