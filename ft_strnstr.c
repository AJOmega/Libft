#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *big, const char *lit, size_t len)
{
    size_t    ib;
    size_t    il;
    size_t    sizelit;
    size_t    sizebig;

    ib = 0;
    il = 0;
    sizelit = strlen(lit);
    sizebig = strlen(big);
    if (lit == "")
    {
        return ((char *)big);
    }
    while (big[ib] && len > 0)
    {
        if (big[ib] == lit[il])
        {
            if (il + 1 == sizelit)
            {
                return ((char *)&big[ib - 1]);
            }
            il++;
        }
        else if (big[ib - 1] == lit[il - 1])
        {
            il = 0;
        }
        ib++;
        len--;
    }
    return (0);
}


int	main(void)
{
	printf("%s\n", ft_strnstr("Hello World . AIai", "AI", 2));
}