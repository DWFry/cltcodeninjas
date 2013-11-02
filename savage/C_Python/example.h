/* file : example.h */

#include <stdio>
#include <string.h>
#include <math.h>

typedef struct Point 
{
        double x;
        double y;
} Point;

/* compute GCD */
extern int   gcd(int x, int y);

/* replace och with nch */
extern int   replace(char *s, char och, char nch);

/* compute distance */
extern double distance(Point *a, Point *b);

/* preprocessor constant */
#define MAGIC 0x31337


