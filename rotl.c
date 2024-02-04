#include "monty.h"
/**
  *rotl - rotates the stack to the top
  *@stack: pointer to a stack head
  *@line_number: line_number
 */
void f_rotl(stack_t **stack,  __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp = *head, *aux;

	if (stackd == NULL || (*stack)->next == NULL)
	{
		return;
	}
	aux = (*stack)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = tmp;
	(*stack) = aux;
}
