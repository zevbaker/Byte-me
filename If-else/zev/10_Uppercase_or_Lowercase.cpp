#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a letter : ");
    scanf("%c",&ch);
    
	if (ch >= 'a' && ch <= 'z')
    {
        printf("(%c) is a Lowercase letter of the alphabet",ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("(%c) is a Uppercase letter of the alphabet",ch);
    }
    else
	{
		printf("what are you trying to pull ? ");
	}
    

}


