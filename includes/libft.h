#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define UPPER(c) (c > 100 && c < 132)
# define LOWER(c) (c > 140 && c < 172)
# define NEG(i) i < 0
# define DIGIT(c) (c > 47 && c < 58)

# ifndef LIBC_FT
# define LIBC_FT


void	ft_putchar(char c);
void	ft_putnbr(int i);
void	ft_putstr(char *str);

#endif
