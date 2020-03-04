/*
** EPITECH PROJECT, 2018
** rush.h
** File description:
** [enter description here]
*/

#include "my.h"

void rush2(int argc, char *argv[]);
int get_length(char *text);
int count_occurences(char search, char *text);
float get_frequency(int length, int result);
char * transform_lowercase(char *text);
void calcul_lang(int argc, int num_letter[], float frequency[]);
void check_lang(float *en, float *fr, float *ge, float *sp);

#define LANG_EN (0)
#define LANG_FR (1)
#define LANG_GE (2)
#define LANG_SP (3)

char letters[26] = "abcdefghijklmnopqrstuvwxyz";

float languages[26][4] = {
{8.167, 7.636, 6.516, 11.525},
{1.492, 0.901, 1.886, 2.215},
{2.782, 3.260, 2.732, 4.019},
{4.253, 3.669, 5.076, 5.010},
{12.702, 14.715, 16.396, 12.181},
{2.228, 1.066, 1.656, 0.692},
{2.015, 0.866, 3.009, 1.768},
{6.094, 0.737, 4.577, 0.703},
{6.966, 7.529, 6.550, 6.247},
{0.153, 0.613, 0.268, 0.493},
{0.727, 0.074, 1.417, 0.011},
{4.025, 5.456, 3.437, 4.967},
{2.406, 2.968, 2.534, 3.157},
{6.749, 7.095, 9.776, 6.712},
{7.507, 5.596, 2.594, 8.683},
{1.929, 2.521, 0.670, 2.510},
{0.095, 1.362, 0.018, 0.877},
{5.987, 6.693, 7.003, 6.871},
{6.327, 7.948, 7.270, 7.977},
{9.056, 7.244, 6.154, 4.632},
{2.758, 6.311, 4.166, 2.297},
{0.978, 1.838, 0.846, 1.138},
{2.360, 0.049, 1.921, 0.017},
{0.150, 0.427, 0.034, 0.215},
{1.974, 0.128, 0.039, 1.008},
{0.074, 0.326, 1.134, 0.467}
};
