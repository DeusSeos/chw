#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int character;
	bool in_word = false;
	int letter_count = 0, word_count = 0;

	while ((character = getchar()) != EOF)
	{
		if (isalpha(character))
		{
			letter_count++;

			if (!in_word)
			{
				in_word = true;
				word_count++;
			}
		}
		else
			in_word = false;
	}
	printf("Average: %.3f\n", (float) letter_count / word_count);

	return 0;
}
