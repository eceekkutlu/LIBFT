#include <stdio.h>
#include "libft.h"

int main()
{
    char *str= "   fatih soymaz dfgdf dfg df dfg dfgfdgdfgfdg";
    char c = ' ';
    char **x=ft_split(str, ' ');
    int i = 0;
    while(x[i]){
        printf("%s\n",x[i]);
        free(x[i]);
        i++;
    }
    free(x);
    // " merhaba     ece ben kerem";
    //"merhaba" "ece" "ben" "kerem";
    //""merhaba" "ece" "ben" "kerem""
}
