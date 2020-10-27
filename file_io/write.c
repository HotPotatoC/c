#include <stdio.h>

int main(void)
{
    FILE *file;

    file = fopen("write_text.txt", "w");
    fprintf(file, "Hello World!\n");

    fclose(file);

    return 0;
}