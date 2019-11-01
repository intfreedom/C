#include "stdio.h"
#include "stdlib.h"

struct List {
	int data;
	struct List* next;
};

struct Stack {
	struct List* head;
	int size;
};

struct Stack* StackInit(void)
{
	struct Stack* stack = NULL;
	stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->head = (struct List*)malloc(sizeof(struct List));
	stack->head->next = NULL;
	stack->size = 0;
	return stack;
}

int StackPush(struct Stack* stack, int data)
{
	struct List* tmp = (struct List*)malloc(sizeof(struct List));
	tmp->data = data;
	tmp->next = stack->head->next;
	stack->head->next = tmp;
	stack->size++;
	return 0;
}

int IsStackEmpty(struct Stack* stack)
{
	if (stack->head->next == NULL)
		return 1;
	else
		return 0;
}

int StackPop(struct Stack* stack, int* data)
{
	struct List* tmp = NULL;
	if (IsStackEmpty(stack))
		return -1;

	tmp = stack->head->next;
	*data = tmp->data;
	stack->head->next = tmp->next;
	stack->size--;
	free(tmp);

	return 0;
}


int main(void)
{
	int i = 0;
	struct Stack* stack = NULL;
	stack = StackInit();
	for (i = 0; i < 5; i++)
	{
		StackPush(stack, i);
	}

	for (i = 0; i < 5; i++)
	{
		int data = 0;
		StackPop(stack, &data);
		printf("%d ", data);
	}

	printf("\n");
	return 0;
}