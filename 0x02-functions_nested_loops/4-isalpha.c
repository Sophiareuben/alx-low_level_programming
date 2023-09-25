#include "main.h"

/**
 * _isalpha - This checks for alphabetic character
 * @c: This is the char to be checked
 * Return: 1 if c is a letter, 0 otherwise
 * Written by Sophia
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

