#include <stdio.h>
#include <math.h>

int main(void){
        double a, b, c, d, e, f, h, res;
        scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h);
        printf("%.0lf/t%.0lf\t%.0lf\t%.0lf\t%.0lf\t%.0lf\t%.0lf\tres= %lf",a,b,c,d,e,f,h,res);

    res = f*h;
    res = e/res;
    res = d*res;
    res = c/res;
    res = b*res;
    res = a/res;
    
  res = a/(b*(c/(d*(e/(f*h)))));
  
  printf("%.2lf", res);
  return 0;
}
