/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** Function that copies n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while ((i < n) || (n < strlen(src))) {
        dest[i] = src[i];
        i++;
    }
    if (my_strlen(src) < n){
        dest[i] = '\0';
    }
    return (dest);
}
