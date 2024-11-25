#ifndef POSITION_H
#define POSITION_H
#include <time.h>
#include "signal.h"

int a;

double time_to_collision_at_rest(float velocity) {
    clock_t start = clock();
    do {
        a = signal();
    } while (a == 1);
    clock_t end = clock();
    double time_to_reception = ((double)(end-start)) / CLOCKS_PER_SEC;
    return time_to_reception;
}

double xposition(double time) {
    return time * 343 / 2;
}
#endif