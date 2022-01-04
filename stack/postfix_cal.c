/*
//buggy code below!
 ============================================================================

 Description : Write a C program to evaluate a postfix expression.
				[ You may consider single digit operands only ]

 ============================================================================*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include<assert.h>


#define stacksize 100


bool isOperand(char);

char stack[stacksize];
void clearStack();
int top = -1;
int pop();
void push(int x);



//main function
int main(void) {


	char postfix[20] = "888+*";

	// printf("\nEnter a postfix expression:\n");

	// scanf("%s",postfix);



	clearStack();
	char* ch = postfix; // char pointer for string location
	int num1,num2;
	int res=0;
	while(*ch != '\0')
	{
	 if(isOperand(*ch))
	 {
        int x = *ch-48;
	 	push(x); // ascii to digit
	 }
	 else
	 {
		num1 = pop();
		num2 = pop();
		switch(*ch)
		{
			case '/':
				res = num2/num1;
				break;
			case '*':
				res = num2*num1;
				break;
			case '+':
				res = num2+num1;
				break;
			case '-':
				res = num2-num1;
				break;
		}
		push(res);
	 }
	 ch++;
	}

	printf("\nResult after evaluation of {%s} is   :   %d ",postfix,res);

	

   /* assert(top!=-1);
      printf("\nResult after evaluation of {%s} is   :   %d ",postfix,stack[top]);
      
      
bug
//output: 
//Result after evaluation of {888+*} is   :   -128 [Finished in 86ms]
*/
	return 0;
}




// stack operations

void clearStack()
{
	top =-1;
}

int pop()
{
	if(top == -1)
	printf("Stack is empty\n");
	return stack[top--];
}

void push(int x)
{
	if(top == stacksize-1)
	printf("Stack Overflow\n");
	else
	{
		stack[++top] = x;
	}
}




bool isOperand(char x ){
	if(x =='*'||x=='+'||x=='-'||x=='/')
	return false;
	return true;
}

//output: 
//Result after evaluation of {888+*} is   :   128 [Finished in 86ms]
