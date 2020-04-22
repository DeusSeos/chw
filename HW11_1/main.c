#include <stdio.h>

#define LIMIT 50

char * mystrcpy(char *s1, char *s2, int n);
char * get(char *string, int n);
void clear_string(char * string, int n);

int main(void)
{
	char str1[LIMIT];
	char str2[LIMIT];
	int n;

	printf("Enter a string to copy: ");
	get(str2, LIMIT);
	while (str2[0] != '\0')
	{
		printf("How many characters do you want to copy? || Max characters: %d ", LIMIT);
		scanf("%d", &n);

		while (getchar() != '\n')
			continue;

		if (n > LIMIT)
			n = LIMIT;

		printf("Original string: %s\n", str2);
		mystrcpy(str1, str2, n);
		printf("Copy: %s\n", str1);

		clear_string(str1, LIMIT);

		printf("Enter a string to copy (empty line to quit): ");
		get(str2, LIMIT);
	}


	return 0;
}

char * mystrcpy(char *s1, char *s2, int n)
{
	// copy n characters from s2 to s1
	// warning: if length of s2 is n or greater
	// then s1 may not be null terminated

	int i = 0;

	// copy n characters or until null char
	while (s2[i] != '\0' && i < n)
	{
		s1[i] = s2[i];
		i++;
	}

	// if i < n pad s1 with null character
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}

	return s1;
}

char * get(char *string, int n)
{
	// wrapper for fgets that replaces first newline with null

	char *return_value = fgets(string, n, stdin);

	while (*string != '\0')
	{
		if (*string == '\n')
		{
			*string = '\0';
			break;
		}

		string++;
	}

	return return_value;
}

void clear_string(char *string, int n)
{

	for (int i = 0; i < n; i++)
		string[i] = '\0';
}
