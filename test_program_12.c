#include <stdio.h>
#include <math.h>

int main() {
  long int i,x,s,t;
    double e;
    d = 2;
    i = 6;
	t = 
    while( i > 0)
    {
        s=i;
        x=s;
        printf("start cicle\t i = %d\t x = %d\t s = %d\t e = %lf\n", i,x,s);
        while(x>0)
        {
            printf("\n\tstart podcicle\t i = %d\t x = %d\t s = %d\t e = %lf\n", i,x,s);
            s= s*x;
            x--;
            
        }
        e=e+(pow(t,x)/s);
        i--;
    }
    e = e+1;
    printf("%lf\n", e);
  return 0;
}
