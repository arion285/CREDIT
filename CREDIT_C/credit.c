#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // getting input card numbers from user
    long n;
    do
    {
        n = get_long("Credit Card Number: ");
    }
    while (n <= 0);

    // getting the different digits from the number prompted by user
    int a, b3, c, d3, e, f3, g, h3, i, j3, k, l3, m, o3, p, q3;
    {
        a = n % (long)1e1;
        b3 = (n % (long)1e2) / 1e1;
        printf("%i\n", b3);
        c = (n % (long)1e3) / 1e2;
        d3 = (n % (long)1e4) / 1e3;
        e = (n % (long)1e5) / 1e4;
        f3 = (n % (long)1e6) / 1e5;
        g = (n % (long)1e7) / 1e6;
        h3 = (n % (long)1e8) / 1e7;
        i = (n % (long)1e9) / 1e8;
        j3 = (n % (long)1e10) / 1e9;
        k = (n % (long)1e11) / 1e10;
        l3 = (n % (long)1e12) / 1e11;
        m = (n % (long)1e13) / 1e12;
        o3 = (n % (long)1e14) / 1e13;
        p = (n % (long)1e15) / 1e14;
        q3 = (n % (long)1e16) / 1e15;
    }

    // multiplication of the second to the last numbers by 2
    int b, d, f, h, j, l, o, q;
    {
        b = b3 * 2;
        d = d3 * 2;
        f = f3 * 2;
        h = h3 * 2;
        j = j3 * 2;
        l = l3 * 2;
        o = o3 * 2;
        q = q3 * 2;
    }

    // getting the different digits of the multitiplication of the remaining numbers by 2 starting from the second to last
    int b1, b2, d1, d2, f1, f2, h1, h2, j1, j2, l1, l2, o1, o2, q1, q2;
    {
        b1 = b / 1e1;
        printf("%i", b1);
        b2 = b % (int)1e1;
        printf("%i", b2);
        d1 = d / (int)1e1;
        d2 = d % (int)1e1;
        f1 = f / (int)1e1;
        f2 = f % (int)1e1;
        h1 = h / (int)1e1;
        h2 = h % (int)1e1;
        j1 = j / (int)1e1;
        j2 = j % (int)1e1;
        l1 = l / (int)1e1;
        l2 = l % (int)1e1;
        o1 = o / (int)1e1;
        o2 = o % (int)1e1;
        q1 = q / (int)1e1;
        q2 = q % (int)1e1;
    }

    // calculating the validity using Luhn's algorithm
    int r = ((b1 + b2 + d1 + d2 + f1 + f2 + h1 + h2 + j1 + j2 + l1 + l2 + o1 + o2 + q1 + q2) + (a + c + e + g + i + k + m + p));



    // checking for MASTERCARD numbers
    if ((n / (long)1e14 > 50 && n / (long)1e14 < 56) && (n / (long)1e16 == 0))
    {
        if (r % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
    }

    // checking for AMEX card numbers
    if ((n / (long)1e15 == 0 && n / (long)1e13 == 34) || (n / (long)1e15 == 0 && n / (long)1e13 == 37))
   {
        if (r % 10 == 0)
        {
            printf("AMEX\n");
        }
    }

    // checking for visa card numbers
    if ((n / (long)1e15 == 4 && n / (long)1e16 == 0) || (n / (long)1e12 == 4 && n / (long)1e13 == 0))
    {
        if (r % 10 == 0)
        {
            printf("VISA\n");
        }
    }

    // checking for invalid card numbers
    if (((r % 10 != 0) || (n / (long)1e12 == 0) || (n / (long)1e14 > 55)) ||  (((n / (long)1e15 == 0) && (o3 != 4) && (n / (long)1e12 == 0)) || ((n / (long)1e15 == 0) && (o3 != 7) && (n / (long)1e12 == 0))))
    {
        printf("INVALID\n");
    }
}
