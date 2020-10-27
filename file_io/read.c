#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(void)
{
    FILE *file;
    int errnum;
    char buff[255];

    file = fopen("read_text.txt", "r");
    if (file == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
        return 1;
    }

    fscanf(file, "%s", buff);
    printf("%s", buff);

    fgets(buff, 255, (FILE *)file);
    printf("%s", buff);

    fgets(buff, 255, (FILE *)file);
    printf("%s", buff);

    fgets(buff, 255, (FILE *)file);
    printf("%s", buff);

    fclose(file);

    return 0;
}