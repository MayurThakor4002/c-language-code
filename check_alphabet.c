// c program to check whether a Character is an Alphabet or not;
#include <stdio.h>

int main()
{

    char ch;  // variable declaration
    printf("Enter the character: "); 
    scanf("%c", &ch); // take user input

    //  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) // condition
    {
        printf(" %c is Alphaber", ch);
    }
    else
    {
        printf("%c is no Alphaber", ch);
    }

    return 0;
}