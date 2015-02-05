// itsa mario, that prints half-piramyd with user defined height.
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int h = 0;
    while(h < 1 || h > 23)
    {
        printf("Height: ");
        h = GetInt();
        if (h == 0)
        {
            break;
        }
    }
    if (h > 0)
    {
        for(int i=1;i <= h;i++)
        {
            for(int j=h;j > 0;j--)
            {
                if (i < j)
                {
                    printf(" ");
                }else
                {
                    printf("#");
                }
            }
            printf("#");
            printf("\n");
        }
    }
}
