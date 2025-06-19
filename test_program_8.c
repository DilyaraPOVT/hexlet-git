#include <stdio.h>

int    main(void)
{
    int rub;
    double kurs, dollars;
    
    rub = 0;
    kurs = 0.0;
    dollars = 0.0;
    
    printf("====проверка====\t rub = %d\t kurs = %g\t dollars = %g\n\n", rub, kurs, dollars);
    scanf("%d", &rub);
    scanf("%lf", &kurs);
    printf("====проверка====\t rub = %d\t kurs = %.13g\t dollars = %.13g\n\n", rub, kurs, dollars);
	dollars = rub*kurs;
	printf("====проверка====\t rub = %d\t kurs = %.13g\t dollars = %.13g\n\n", rub, kurs, dollars);
	printf("");
    
  return 0;
}
