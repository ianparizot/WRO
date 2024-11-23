#include <stdio.h>
#include "position.h"
int main(void) {
    float velocity = 0;
    printf("%.89f m\n", xposition(time_to_collision_at_rest(velocity)));
    return 0;
}
