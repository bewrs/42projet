#include <stdarg.h>
#include <unistd.h>

void test(const char *format, ...)
{
    va_list args;

    va_start(args, format);

    char c = va_arg(args, int);   // 'A' est lu comme int
    write(1, &c, 1);

    va_end(args);
}
