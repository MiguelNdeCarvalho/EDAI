#include "stackar.h"
#include "fatal.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define EmptyTOS -1
#define MinStackSize 5


struct StackRecord
{
    int Capacity;
    int TopOfStack;
    ElementType *Array;
};



Stack CreateStack( int MaxElements )
{

    Stack S;	

	if( MaxElements < MinStackSize )
		Error( "Stack size is too small" );

	S = malloc( sizeof( struct StackRecord ) );
	if( S == NULL )
		FatalError( "Out of space!!!" );

	S->Array = malloc( sizeof( ElementType ) * MaxElements );
	if( S->Array == NULL )
		FatalError( "Out of space!!!" );

	S->Capacity = MaxElements;
	MakeEmpty( S );

	return S;
}


void DisposeStack( Stack S )
{
    if( S != NULL )
    {
        free( S->Array );
        free( S );
    }
}


bool IsEmpty( Stack S )
{
	return S->TopOfStack == EmptyTOS;
}


bool IsFull( Stack S )
{
	return S->TopOfStack == S->Capacity - 1;
}


void MakeEmpty( Stack S )
{
	S->TopOfStack = EmptyTOS;
}


void Push( ElementType X, Stack S )
{
	if(IsFull(S))
		Error("Stack is full!");
	S->Array[++ S->TopOfStack] = X;
}


ElementType Top( Stack S )
{
	if (IsEmpty(S))
	{
		Error("Stack is empty!");
		return 0;
	}
	return S->Array[S->TopOfStack];
}


ElementType Pop( Stack S )
{
	if (IsEmpty(S))
	{
		Error("Stack is empty!");
		return 0;
	}
	return S->Array[S->TopOfStack--];
}

void PrintStack(Stack S)
{
	printf("\n# Top of the Stack #\n");
	
	for(int i=0 ; i<=S->TopOfStack ; i++)
		printf("%d\n", S->Array[i]);

	printf("# End Of Stack #\n\n");
}

bool ParentesisMatch(char *s)
{	
	int lBracket = 0, rBracket = 0, lParentheses = 0, rParentheses = 0, lBraces = 0, rBraces = 0, i = 0;
	
	while(s[i] != '\0')
	{
		switch(s[i]) 
		{
		case '[' :
			lBracket++;
			break;
		case ']' :
			rBracket++;
			break;
		case '(' :
			lParentheses++;
			break;
		case ')' :
			rParentheses++;
			break;
		case '{' :
			lBraces++;
			break;
		case '}' :
			rBraces++;
			break;
		}
		i++;
	}
	// printf("Brackets: %d %d\nParentheses: %d %d\nBraces: %d %d\n", lBracket, rBracket, lParentheses, rParentheses, lBraces, rBraces);
	return lBracket == rBracket && lParentheses == rParentheses && lBraces == rBraces;
}