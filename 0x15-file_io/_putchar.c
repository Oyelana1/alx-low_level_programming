#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[] = "Hello, world!";

    fp = fopen("output.txt", "w");
    fwrite(str, 1, sizeof(str), fp);
    fclose(fp);

    return 0;
}

