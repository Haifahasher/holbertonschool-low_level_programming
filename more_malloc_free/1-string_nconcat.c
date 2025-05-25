#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, using at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to copy from s2
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j, total;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

total = (n < len2) ? len1 + n : len1 + len2;
concat = malloc(total + 1);
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < n && j < len2; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';

return (concat);
}
