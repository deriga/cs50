#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc < 3)
    {
        printf("Bad name1...\n");
        return 0;
    }
    
    for (int i = 1; i < argc; i++)
    {
        string s = argv[i];
        if (strlen(s) < 2)
        {
            printf("Bad name2...\n");
            return 0;
        }
        for (int j = 0, n = strlen(argv[i]); j<n; j++)
        {
            char c = s[j];
            if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            {
                printf("Bad name3...\n");
                return 0;
            }
        }
    }
    for (int i = 1; i < argc; i++)
    {
        printf("%c",toupper(argv[i][0]));
    }
    printf("\n");
}
