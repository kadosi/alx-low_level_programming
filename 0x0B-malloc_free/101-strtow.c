#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *str);
void free_words(char **words);
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

/**
 * free_words - Frees memory allocated for an array of words.
 * @words: The array of words to be freed.
 */
void free_words(char **words)
{
	if (words != NULL)
	{
		int i;

		for (i = 0; words[i] != NULL; i++)
			free(words[i]);
		free(words);
	}
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
	}
	return (count);
}
