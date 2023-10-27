#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives
 * @argc: number of agr
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}

	return (0);
}

