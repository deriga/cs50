// greedy.c counts change 
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    static int dispense[4]={25,10,5,1};
    float c=0.00;
    while(true)
    {
        //Ask for change
        printf("How much change is owed?\n");
        c = GetFloat();
        if (c > 0.00)
        {
            break;
        }
    }
    c = c * 1000;
    int cents=(int) c;
    cents = cents / 10;
    int result=0;
    for(int i=0;i < 4;i++)
    {
        if (cents >= dispense[i])
        {
            result = result + cents / dispense[i];
            cents = cents % dispense[i];

        }
    }
    printf("%i\n",result);
}
