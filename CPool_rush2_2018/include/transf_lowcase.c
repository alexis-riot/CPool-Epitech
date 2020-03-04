/*
** EPITECH PROJECT, 2018
** transf_lowcase.c
** File description:
** Transform string to lowercase
*/

char * transform_lowercase(char *text)
{
    for (int i = 0; i < my_strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] += 32;
    }
    return (text);
}
