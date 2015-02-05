#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    int k = atoi(argv[1]);
    if (k < 1)
        return 1;
    string s = GetString();
    if (k > 26)
        k =  k % 26;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ((s[i] == ' ') ||  (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ')))
        {
            printf("%c", s[i]);
            continue;
        }
        if (isupper(s[i]))
        {
            if ((s[i] + k) > 'Z')
            {
                s[i] = s[i] - 26 + k;
            }
            else
                s[i] = s[i] + k;
        }
        else 
        {
            if ((s[i] + k) > 'z')
            {
                s[i] = s[i] - 26 + k;
            }
            else
                s[i] = s[i] + k;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}
