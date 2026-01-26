#include "printf.h"
#include <unistd.h>

int ft_printf(const char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    
    int i = 0;
    while(format[i])
    {
        if(format[i] == '%')
        {
            i++;
            if(format[i] == 'c')
                ft_printf_c('c');
            if(format[i] == 'd')
                ft_printf_d();
            if(format[i] == 's')
                ft_printf_s();
            if(format[i] == 'p')
                ft_printf_p();
            if(format[i] == 'i')
                ft_printf_i();
            if(format[i] == 'u')
                ft_printf_u();
            if(format[i] == 'x')
                ft_printf_x();
            if(format[i] == 'X')
                ft_printf_XX();
            if(format[i] == '%')
                ft_printf_c('%');
            }
        i++;
    } 
    va_end(arg);
}
