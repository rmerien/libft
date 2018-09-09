#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int        ft_atoi(const char *str)
{
    unsigned long long    res;
    int                    sign;
    long                arch;

    res = 0;
    arch = 2147483647;
    while ((*str > 8 && *str < 14) || *str == 32)
        str++;
    sign = (*str == '-' ? (-1) : 1);
    (*str == '-' || *str == '+') ? str++ : 0;
    while (*str > 47 && *str < 58)
    {
        res = (res * 10) + (*str++ - 48);
        if ((arch + 1) < 0 && res > 2147483647)
            return ((int)2147483647 * sign);
        else if (res > 9223372036854775807)
            return ((sign == 1) ? -1 : 0);
    }
    return ((int)(res * sign));
}

int main (int ac, char **av) {
   int val;
   int test;
 (void) ac;
   val = atoi(av[1]);
   test = ft_atoi(av[1]);

   printf("String value = %s, Int value = %d\n", av[1], val);

   val = atoi(av[2]);
   printf("String value = %s, Int value = %d\n", av[2], val);


printf("\n\n\n\n\nSWITCH");

   printf("String value = %s, Int value = %d\n", av[1], test);

   test = ft_atoi(av[2]);
   printf("String value = %s, Int value = %d\n", av[2], test);

   return(0);
}
