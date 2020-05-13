#include <stdio.h>
#include <string.h>

#define LEN 30

char *mystrcopy(char *s1, char *s2, int n);

int main(void){

    int input;
    char s1[LEN] = "";
    char s2[LEN];

    printf("Enter a string: ");
    scanf("%s", s2);
    while (s2[0] != '\n')
    {
        printf("Enter characters to copy: ");
        scanf("%d", &input);
        if (input > LEN){
            input = LEN;
        }

        mystrcopy(s1, s2, input);

        printf("Copied: %s \n", s1);

        for (int i = 0; i < input; i++)
		    s1[i] = '\0';



        printf("Enter a string to copy (EOF to quit): ");
        scanf("%d", s2);

    }
    return 0;
}



char *mystrcopy(char *s1, char *s2, int n)
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