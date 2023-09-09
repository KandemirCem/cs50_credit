#include <cs50.h>
#include <stdio.h>

int main(void)
{

    long x = get_long("Credit Number:");
    long y = x;
    long z = x;
    long k = x;
    int a = 0;
    int b = 0;
    int c = 0;
    do
    {

        x = x / 10;
        b++;
    }
    while(x>0);


    do
    {
        a = (k%10) + a;
        k = k/10;

        if((k%10)*2>=10)
        {
            a = ((k%10)*2)%10 + a;
            a = ((k%10)*2)/10 + a;
            k = k/10;
        }
        else
        {
            a = ((k%10)*2) + a;
            k = k / 10;
        }

    }while(k>0);




    if((a % 10 == 0))
    {

        if(b == 15 && ((z/10000000000000)==34 || (z/10000000000000)==37))
        {
            printf("AMEX\n");
        }
        else if(b == 16 && 50<(z/100000000000000))
        {
            if(b ==16 && (z/100000000000000)<56)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }

        }
        else if(b == 13 && ((z/1000000000000)==4))
        {
            printf("VISA\n");
        }
        else if(b == 16 && ((z/1000000000000000)==4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else
    {
        printf("INVALID\n");
    }

}