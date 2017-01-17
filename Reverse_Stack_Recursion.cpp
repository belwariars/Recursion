// Reverse Stack using Recursion...

// TIME COMPLEXITY: O(N)    SPACE COMPLEXITY : one original stack and 2 internal stack of reverse1 & reverse2 are used so, O(N+N+N) = O(3N) = O(N)

#include <bits/stdc++.h>
using namespace std;

struct Stack
{
	int top;
	unsigned capacity;
	int *arr;	
};

struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->top = -1;
	stack->capacity = capacity;
	stack->arr = (int*)malloc(stack->capacity * sizeof(int));
	
	return stack;
}

int isEmpty(struct Stack* stack)
{
	if(stack->top == -1)
		return 1;
	else
		return 0;
}


void push(struct Stack *stack, int data)
{
	
		stack->arr[++stack->top] = data;
//		printf("%d \n", stack->arr[stack->top]);
	
}

int pop(struct Stack* stack)
{
	if(!isEmpty(stack))
	{
		int t = stack->arr[stack->top];
		stack->top--;
		return t;
	}
	else
	{
		printf("Empty");
		return '$';
	}
}

void reverse2(struct Stack **stack, int x)
{
	if(isEmpty(*stack))
	{
		push(*stack, x);
	}
	else
	{
		int y = pop(*stack);
		reverse2(stack, x);
		
		push(*stack, y);
	}
}

void reverse1(struct Stack** stack)
{
	if(isEmpty(*stack))  //O(1) TIME
		return;
	
	int x = pop(*stack);  // O(1) TIME
	reverse1(stack);
	
	reverse2(stack, x);
}

int main()
{
	struct Stack *stack = createStack(10);
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	push(stack, 40);
	push(stack, 50);
	push(stack, 60);

	// NOW THE FUNCTION TO REVERSE THE STACK USING RECURSION...
	printf("%d\n\n", stack->arr[stack->top]);
	reverse1(&stack);
	
	printf("%d\n", stack->arr[stack->top]);
	pop(stack);
	printf("%d\n", stack->arr[stack->top]);
	pop(stack);
	printf("%d\n", stack->arr[stack->top]);
	pop(stack);
	printf("%d\n", stack->arr[stack->top]);
	pop(stack);
	printf("%d\n", stack->arr[stack->top]);
	pop(stack);
	printf("%d\n", stack->arr[stack->top]);
	
	pop(stack);
//	printf("%d\n", stack->arr[stack->top]);
	
	return 0;
}
