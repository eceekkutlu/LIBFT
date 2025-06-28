#include <stdio.h>
#include "libft.h"

char my_func(unsigned int i, char c)
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

int main()
{
    const char s[] = "merhaba";
    char *result = ft_strmapi(s, my_func);

    if (!result)
    {
        printf("Hata: NULL döndü\n");
        return 1;
    }

    printf("%s\n", result);
    free(result);
    return 0;
}
