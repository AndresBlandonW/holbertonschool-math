#ifndef FibonaccM_H
#define FibonacciM_H

#include <stdlib.h>
#include <math.h>

/**
 * struct s_cell - a struct to store a Fibonacci sequence
 * @elt: a member of the Fibonacci sequence
 * @next: a pointer to the next node
 */
typedef struct s_cell
{
int elt;
struct s_cell *next;
} t_cell;

t_cell *Fibonnaci(void);
double gold_number(t_cell *head);
t_cell *create_node(double n);
void reverse(t_cell **head, t_cell *prev, t_cell *node);
t_cell *reverse_cell(t_cell **head);

#endif