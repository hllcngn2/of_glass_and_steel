#include <stdlib.h>//rand RAND_MAX

int	rn(int max){ //0-max inclusive
int	n;
do { n =rand() /(RAND_MAX /max+1);
} while (n >max);
return n;}
int	rrange(int min, int max){ //inclusive
int	n;
n =rn(max-min) +min;
return n;}
