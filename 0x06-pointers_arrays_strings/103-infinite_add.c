#include "main.h"

/**
 * rev_string - This reverses an array
 * @n: Character
 * Return: Always 0 (Success)
 */

void rev_string(char *n)
{
        int i;
        int a = 0;
        char temp;

        for (i = 0; *(n + i) != '\0'; i++)

        i--;

        for (a = 0; a < i; a++, i--)
        {
                temp = *(n + a);
                *(n + a) = *(n + i);
                *(n + i) = temp;
        }
}

/**
 * infinite_add - This adds 2 numbers
 * @n1:This is the 1st number
 * @n2:This is the 2nd number
 * @r: This is the buffer
 * @size_r: This is the buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int full = 0, i, a, digits = 0;
        int val1 = 0, val2 = 0, temp = 0;

        for (i = 0; *(n1 + i) != '\0'; i++)

        for (a = 0; *(n2 + a) != '\0'; a++)
    
        i--;
        a--;
        if (a >= size_r || i >= size_r)
                return (0);
        while (a >= 0 || i >= 0 || full == 1)
        {
                if (i < 0)
                        val1 = 0;
                else
                        val1 = *(n1 + i) - '0';
                if (a < 0)
                        val2 = 0;
                else
                        val2 = *(n2 + a) - '0';
                temp = val1 + val2 + full;
                if (temp >= 10)
                        full = 1;
                else
                        full = 0;
                if (digits >= (size_r - 1))
                        return (0);
                *(r + digits) = (temp % 10) + '0';
                digits++;
                a--;
                i--;
        }
        if (digits == size_r)
                return (0);
        *(r + digits) = '\0';
        rev_string(r);
        return (r);
}
