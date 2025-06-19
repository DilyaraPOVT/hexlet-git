#include <stdio.h>
#include <string.h>

int main() {
    int i, s;
    char sogl[10] = "error";

    printf("\n\nТебе надо будет написать мне число, а я попробую угадать четное оно или не четное, ну что попробуем?\n\tНапиши свой ответ в формате yes/no\t :");
	while(strcmp(sogl, "error") ==0)
	{
		scanf("%9s", sogl);
		if(strcmp(sogl, "yes") ==0 || strcmp(sogl, "y") ==0)
		{
			printf("\tТогда начнем!\n\n");
			printf("Сколько чисел ты бы хотел проверить?:");
			scanf("%d", &s);
			while(s > 0)
			{
				printf("\tТвое число :");
				scanf("%d", &i);
				i = i%2;
				if(i == 0)
				{
				printf("Дай угадаю твое число четное!\n\n");
				}
				else if (i == 1)
				{
				printf("Я знаю!\t Я знаю! .......... Это нечетное число!\n\n");
				}
				else 
				{
				printf("Блин какая то ошибка!\n\n");
				}
			s--;
			}
		printf("\n\n000000\t  00\t0   0\t   0   \n");
		printf("0    0\t 0  0\t0  0\t  0 0  \n");
		printf("0    0\t0    0\t00\t 0   0 \n");
		printf("0    0\t 0  0\t0  0\t0000000\n");
		printf("0    0\t  00\t0   0\t0     0\n\n");
		}
		else if(strcmp(sogl, "no") ==0 || strcmp(sogl, "n") ==0)
		{
			printf("Хорошо, пока, надеюсь ты еще вернешься!\n\n");
		}
		else
		{
			printf("Ты что то не то ввел, я тебя не понимаю попробуй еще раз!\n\tНапиши свой ответ в формате yes/no\t :");
			strcpy(sogl, "error");
		}
	}
    return 0;
}
