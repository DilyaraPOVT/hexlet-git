#include <stdio.h>
int	main(void)
{
	char simvol;
	int i;
	
	i = 6;

	printf(" у тебя будет %d попыток выбрать направление\n\n", i);
	while(i >0 )
	{
		printf("выбери одно направление :  ");
		scanf(" %c", &simvol);
		switch( simvol )
		{
			case 'w':
			printf("\n\nты выбралла Вверх\n\n");
			break;
			case 's':
			printf("\n\nты выбралла Вниз\n\n");
			break;
			case 'a':
                        printf("\n\nты выбралла Влево\n\n");
                        break;
                        case 'd':
                        printf("\n\nты выбралла Вправо\n\n");
			break;
			default:
			printf("\n\n НЕ ТО ПИШЕШЬ\n\n у тебя осталось %d попыток\n\n", i-1);
			break;
		}
		//printf("______проверочная строка______  значение было  i = %d\n", i);
		i--;
		//printf("______проверочная строка______  значение стало  i = %d\n", i);
	}
	return(0);
}
