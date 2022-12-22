//Write a C program to check an alphabet is vowel or consonant.
//The output of given problem statement will vowel or consonant.
//Sample Input
// a
// Sample Output
// Vowel </stdio.h>
// We can solove this program in two using or oprator and switch case as per hint they use default function in hint default function we use in swich case.

#include <stdio.h>

int main()
{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    /* Switch value of ch */
    switch(ch)
    {
        case 'a': 
            printf("a is Vowel");
            break;
        case 'e': 
            printf("e is Vowel");
            break;
        case 'i': 
            printf("i is Vowel");
            break;
        case 'o': 
            printf("o is Vowel");
            break;
        case 'u': 
            printf("u is Vowel");
            break;
        case 'A': 
            printf("A is Vowel");
            break;
        case 'E': 
            printf("E is Vowel");
            break;
        case 'I': 
            printf("I is Vowel");
            break;
        case 'O': 
            printf("O is Vowel");
            break;
        case 'U': 
            printf("U is Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}
