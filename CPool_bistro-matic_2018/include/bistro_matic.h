/*
** EPITECH PROJECT, 2018
** bistromatic
** File description:
** Prototypes of all functions in the program bistromatic
*/

#define OP_OPEN_PARENT_IDX  0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX         2
#define OP_SUB_IDX          3
#define OP_NEG_IDX          3
#define OP_MULT_IDX         4
#define OP_DIV_IDX          5
#define OP_MOD_IDX          6

#define EXIT_USAGE    84
#define EXIT_BASE     84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC   84
#define EXIT_READ     84
#define EXIT_OPS      84

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG        "error"



char  *get_expr(unsigned int size);
void check_base(char const *b);
void check_ops(char const *ops);
void display_help(void);

void eval_expr(char *str, char *operators, char *expr);
char **format_expr(char *expr, char *str, char *operators);
char *remove_badchar(char *str);
int check_expr(char **str);
int send_result(char **str);
int do_op(int number, char operator, int next_number);
int check_operator(char **str);
char *set_operators(char *expr);

char *remove_space(char *str);
int send_error(char *c);




int size_2str_res(int nb, int len_b);
void convert_result(char *base, char *operateur, int nb);
int carac_c(char **argv, int i);
int carac_nbr(char **argv, int i);
int size_str(char **argv);
int nbr_carac_nbr(char **argv, int i);
char **tab_str(char **argv);
char *my_revstr(char *str);
int size_nbr(int nb);
char *convert_nbr(char *str, int nb, int i);
char *convert_nbr_res(int nb);
char carac_conv(char *src, char **argv);
int carac_c_src(char *src, char **argv);
int val_b(char **argv, char *src, int b);
int calcul(char **argv,char *src, int b, int n);
char **convert_carac(char **argv);
int size_2str(char **src, char **argv);
char *convert_2str_str(char **argv);
