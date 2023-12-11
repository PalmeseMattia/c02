#include <unistd.h>

void    print_hex(char c)
{
    char    *hex_alphabet;
    char    hex[2];

    hex_alphabet = "0123456789abcdef";
    hex[0] = hex_alphabet[(c >> 4) & 0xF];
    hex[1] = hex_alphabet[c & 0xF];

    write(1, hex, 2);
}

void    ft_putstr_non_printable(char *str)
{
    while(*str)
    {
        if (*str >= '\a' && *str <= '\r')
        {
            write(1, "\\", 1);
            print_hex(*str);
        }
        else
            write(1, str, 1);
        str++;
    }
}

int main(){
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    return 0;
}