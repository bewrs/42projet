#include "printf.h"

int ft_printf_c(const char c)
{
    return(write(1, &c, 1));
}    
