#include "heron.h"

/**
 * heron - return the Heron sequence until having convergence
 * @p: sqr root approximate
 * @x0: first term
 * Return: Heron sequence
 */

t_cell *heron(double p, double x0)
{

t_cell *sqrt = create_node(x0);
t_cell *ptr = sqrt;
double error;

while (1)
{
x0 = (x0 + (p / x0)) / 2.0;
error = p - (x0 * x0);
if (error < 0)
error *= -1;
if (error <= 0.00000001)
break;

ptr->next = create_node(x0);
ptr = ptr->next;
}
reverse_cell(&sqrt);
return (sqrt);
}


/**
 * create_node - creates new node the Heron sequence
 * @nh: a member of the Heron sequence
 *
 * Return: node
 */
t_cell *create_node(double nh)
{
t_cell *sqrt = malloc(sizeof(t_cell));

if (sqrt == NULL)
{
free(sqrt);
return (NULL);
}
sqrt->elt = nh;
sqrt->next = NULL;
return (sqrt);
}


/**
 * reverse - revert the linked list
 * @head: a list of elements with a pointer to the 1er elem
 * @prev: previous noed linked list
 * @node: a pointer to another node of the linked list
 *
 * Return: Nothing
 */
void reverse(t_cell **head, t_cell *prev, t_cell *node)
{
if (node->next != NULL)
{
prev = node;
node = node->next;
*head = (*head)->next;
reverse(head, prev, node);
node->next = prev;
}
}


/**
 * reverse_cell - reverses a linked list
 * @head: a list of elements with a pointer to the first element
 *
 * Return: first node of the reversed list
 */
t_cell *reverse_cell(t_cell **head)
{
t_cell *prev, *node;

if (head == NULL || *head == NULL)
{
return (NULL);
}
node = *head;
prev = node;
reverse(head, prev, node);
node->next = NULL;
return (*head);
}
