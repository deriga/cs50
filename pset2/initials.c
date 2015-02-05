//Takes the name from keyboard and returns initials in uppercase
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string name = GetString();
    bool flag = true;
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (!((name[i] >= 'A' && name[i] <= 'Z')||(name[i] >='a' && name[i] <= 'z')||(name[i] == ' ')))
        {
            return 0;
        }
    }
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == ' ')
        {
            flag = true;
            continue;
        }
        if (flag)
        {
            flag = false;
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
}
