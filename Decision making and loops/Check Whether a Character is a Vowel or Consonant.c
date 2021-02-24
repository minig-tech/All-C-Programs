//Check Whether a Character is a Vowel or Consonant
#include<stdio.h>

int main()
{
    char a;

    printf("Enter a character(only alphabet): ");
    scanf("%c",&a);

    if( a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u' )
        printf("\nVowel\n");
    else
        printf("\nConsonant\n");
    return 0;
}
