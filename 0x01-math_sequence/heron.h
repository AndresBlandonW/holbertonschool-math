#ifndef MathH_H
#define MathH_H

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/**
 * struct list_math - singly linked list
 * @elt: result of sequence
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_math
{
double elt;
struct list_s *next;
} t_cell;

t_cell *heron(double p, double x0);
t_cell *reverse_cell(t_cell **head);
void reverse(t_cell **head, t_cell *prev, t_cell *node);
t_cell *create_node(double n);

#endif
