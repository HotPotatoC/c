#include <stdio.h>
#include <stdlib.h>

void foo(const int arg)
{
    printf("Value of arg: %d\n", arg);
}

void multiply(const int x, const int y)
{
    int res = x * y;
    printf("%d * %d = %d\n", x, y, res);
}

void baz(const char *msg)
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
    void (*ptr_foo_func)(int) = foo;
    printf("%p\n", ptr_foo_func);
    ptr_foo_func(5);

    void (*ptr_multiply_func)(int, int) = multiply;
    printf("%p\n", ptr_multiply_func);
    ptr_multiply_func(8, 6);
    ptr_multiply_func(10, 10);
    ptr_multiply_func(15, 5);

    void (*cb_func)(const char *) = baz;

    func_with_callback(cb_func, "Hello, World!");

    return 0;
}