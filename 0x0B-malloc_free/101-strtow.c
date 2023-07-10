#include <stdlib.h>

/**
 * strtow - Splits a string into an array of words
 * @str: Pointer to the string to be split
 *
 * This function takes a string and splits it into individual words.
 * The words are stored in a dynamically allocated array of strings.
 *
 * Return: Pointer to the array of strings (words) if successful,
 *         or NULL if `str` is NULL, empty, or memory allocation fails.
 */

char **strtow(char *str)
{
	if (!str || !*str)
		return (NULL);
	int i = 0, j = 0, k = 0, len = 0, count = 0;
	char **f, *col;

	while (str[i])
		count += (str[i++] != ' ' && (str[i] == ' ' || !str[i]));
	if (count == 0)
		return (NULL);
	f = malloc(sizeof(char *) * (count + 1));
	if (!f)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		len = 0;
		while (str[len] != ' ' && str[len])
			len++;
		col = malloc(sizeof(char) * (len + 1));
		if (!col)
		{
			while (j-- >= 0)
				free(f[j]);
			free(f);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			col[k] = str[k];
		col[k] = '\0';
		f[j++] = col;
		str += len;
	}
	f[j] = NULL;
	return (f);
}

