#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void error_output(void)
{
    printf("Usage: ./vigenere <key letters 'A'-'Z' 'a'-'z'>\n");
}
int main(int argc, string argv[])    
{
    if (argc != 2)
    {
        error_output();
        return 1;
    }
    string k = argv[1];
    for (int i = 0, n = strlen(k); i<n; i++)
    {
        if ((!isalpha(k[i])))
        {
            error_output();
            return 1;
        }
    }
    string s = GetString();
    for (int i = 0, j = 0, m = strlen(k), n = strlen(s); i < n; i++)
    {
        if (j == m)
            j = 0;
        if (s[i] == ' ' || s[i] == '!' || s[i] == '?' || s[i] == '.' || s[i] == ',')
        {
            printf("%c", s[i]);
            continue;
        }
        k[j] = toupper(k[j]);
        if (isupper(s[i]))
        {
            if ((s[i] + (k[j] - 65)) > 'Z')
            {
                s[i] = s[i] - 26 + (k[j] - 65);
            }
            else
                s[i] = s[i] + (k[j] - 65);
        }
        else 
        {
            if ((s[i] + (k[j] - 65)) > 'z')
            {
                s[i] = s[i] - 26 + (k[j] - 65);
            }
            else
                s[i] = s[i] + (k[j] - 65);
        }
       printf("%c", s[i]);
       j++;
    }
    printf("\n");
}
