#include <stdio.h>

void foo(const char *msg)
{
    printf("%s", msg);
}

void func_with_callback(void (*cb)(const char *), const char *msg)
{
    printf("This is from the callback function\n");
    (*cb)(msg);
}

int main(void)
{
    void (*cb_func)(const char *) = &foo;

    func_with_callback(cb_func, "Hello, World!\n");

    return 0;
}