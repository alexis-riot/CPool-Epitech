/*
** EPITECH PROJECT, 2018
** rush2
** File description:
** [enter description here]
*/

#include "include/rush.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
        return (84);

    rush2(argc, argv);
    return (0);
}

void display(char argv, int occurences, float frequency)
{
    int freq_last = ((frequency *100) - ((int)frequency * 100));
    my_putchar(argv);
    my_putchar(':');
    my_put_nbr(occurences);
    my_putstr(" (");
    my_put_nbr(frequency);
    my_putchar('.');
    my_put_nbr(freq_last);
    if (freq_last < 10) {
        my_put_nbr(0);
    }
    my_putstr("%)\n");
}

void rush2(int argc, char *argv[])
{
    int num_letter[26];
    int length = get_length(argv[1]);
    int occurences;
    float frequency[26];
    float fin_result[4];

    argv[1] = transform_lowercase(argv[1]);

    for (int i = 2; i < argc; i++) {
        occurences = count_occurences(argv[i][0], argv[1]);
        frequency[i - 2] = get_frequency(length, occurences);
        num_letter[i - 2] = argv[i][0] - 97;
        display(argv[i][0], occurences, frequency[i - 2]);
    }
    for (int i = 0; i < 26; i++) {
        occurences = count_occurences(letters[i], argv[1]);
        frequency[i] = get_frequency(length, occurences);
        num_letter[i] = letters[i] - 97;
    }
    calcul_lang(argc, num_letter, frequency);
}

void calcul_lang(int argc, int num_letter[], float frequency[])
{
    float result[4][26];
    float fin_result[4];

    for (int lang = 0; lang < 4; lang++) {
        for (int i = 0; i < 26; i++) {
            result[lang][i] = frequency[i] - languages[num_letter[i]][lang];
            if (result[lang][i] < 0) {
                result[lang][i] = -1 * result[lang][i];
            }
        }
        for (int i = 0; i < 26; i++) {
            fin_result[lang] = fin_result[lang] + result[lang][i];
        }
    }
    check_lang(&fin_result[0], &fin_result[1], &fin_result[2], &fin_result[3]);
}

void check_lang(float *en, float *fr, float *ge, float *sp)
{
    if (*en < *fr && *en < *ge && *en < *sp)
        my_putstr("=> English\n");

    if (*fr < *en && *fr < *ge && *fr < *sp)
        my_putstr("=> French\n");

    if (*ge < *fr && *ge < *en && *ge < *sp)
        my_putstr("=> German\n");

    if (*sp < *fr && *sp < *en && *sp < *ge)
        my_putstr("=> Spanish\n");
}
