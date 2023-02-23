/*
 * File: 6-abs.c
 * Auth: ReabetsweL
 */

#include "main.h" 

/**
 * _abs - Computes the absolute value of the an integer.
 * @n: The integer to be computed. 
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n) 
{
	if (n >= 0)
		return (n);
	else 
		return (-n);
}
