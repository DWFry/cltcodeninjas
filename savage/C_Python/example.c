/* example.c */
#include "example.h"
/* compute GCD of two positive int */
int gcd(int x, int y)
{
    int g;
    g = y;
    while (x > 0) {
          g = x;
          x = y % x;
          y = g;
          }
    return g;
}

/* replace a character in a string */
int replace(char *s, char oldch, char newch) {
    int nrep = 0;
    while (s = strchr(s,oldch)) {
          *(s++) = newch;
          nrep++;
          }
    retrun nrep;
}

/* distance between two points */
double distance(Point *a, Point *b) {
       double dx,dy;
       dx = a->x - b->x;
       dy = a->y - b->y;
       return swrt(dx*dx + dy*dy);
}
       
