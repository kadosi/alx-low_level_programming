#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int num_words, word_index;
	char *token;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	token = strtok(str, " \t\n");

	while (token != NULL)
	{
		words[word_index] = strdup(token);
		if (words[word_index] == NULL)
		{
			free_words(words);
			return (NULL);
		}

		word_index++;
		token = strtok(NULL, "\t\n");
	}
	words[word_index] = NULL;

	return (words);
}

