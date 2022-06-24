#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char rotate();
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plaintext;
    string key = argv[1];

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    if (argc == 2)
    {
        plaintext = get_string("plaintext: ");
    }
    int cipher = atoi(key);
    string ciphertext = rotate(plaintext, cipher);
    printf("ciphertext:%s", ciphertext);

}

char rotate (char plaintext[j], int cipher)
{
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (((plaintext[j] - 65) + cipher) % 26) + 65);
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", (((plaintext[j] - 97) + cipher) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    return rotate;
}
