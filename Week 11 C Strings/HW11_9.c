#include <stdio.h>

#define LIMIT 100

char* reverse(char *s1);

int main(void){

    char string[LIMIT];

    char * get(char *string, int max);

    printf("Enter a string to be reversed: ");
    get(string, LIMIT );

    while(string[0] != '\0')
    {
        reverse(string);
        printf("Your string revered is %s\n", string);

        printf("Enter a string to be reversed.(Enter empty line to exit program) " );
        get(string, LIMIT);
    }

    return 0;

}

char* get(char *string, int n)
{

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

char* reverse(char *original_string)
{
    char *reveresed_string = original_string;
    char temp;

    while (*(reveresed_string+1) != '\0'){
        reveresed_string++;
    }

    while(original_string < reveresed_string){
        temp = *original_string;
        *original_string = *reveresed_string;
        *reveresed_string = temp;

        original_string++;
        reveresed_string--;



    }

}




