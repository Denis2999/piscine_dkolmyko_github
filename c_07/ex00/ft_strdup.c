#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i;
	int len = 0;
	char *dup;

	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return NULL;
	}

	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}

	dup[len] = '\0';

	return dup;
}

// int main()
// {
// 	char original[] = "Hello, world!";
// 	char *duplicate = ft_strdup(original);

// 	if (duplicate != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Duplicate: %s\n", duplicate);

// 		// Free the allocated memory
// 		free(duplicate);
// 	}

// 	return 0;
// }
