/*
** EPITECH PROJECT, 2018
** count_occurences.c @rush-2
** File description:
** Count all occurences
*/

int count_occurences(char search, char *text)
{
    int count = 0;
    char lowercase;
    char uppercase;

    if (search >= 'A' && search <= 'Z') {
        lowercase = search + 32;
        uppercase = search;
    }

    if (search >= 'a' && search <= 'z') {
        lowercase = search;
        uppercase = search - 32;
    }

    for (int i = 0; i < my_strlen(text); i++) {
        if (lowercase == text[i] || uppercase == text[i])
            count++;
    }
    return (count);
}
