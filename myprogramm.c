#include <stdio.h>

int main(void)
{
        FILE *fp;

        fp = fopen("input.txt", "w");
        fprintf(fp, "This is Sparta!");
        fclose(fp);

        return 0;
}
