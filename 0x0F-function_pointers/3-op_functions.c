#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add 2 number
 *
 */
int op_add(int a, int b)
{
	return a+b;

}

/** op_sub - substract 2 number
 *
 *
 */
int op_sub(int a, int b)
{
	return a - b;

}

/** op_mul - multiplies 2 number
 *
 * 
 */
int op_mul(int a, int b)
{
	return a*b;

}

/**
 * op_div - divides 1 number
 *
 */
int op_div(int a, int b)
{
	if ( b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return a / b;
}

/**
 * op_mod modulo of 2 number
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return a % b;
}
