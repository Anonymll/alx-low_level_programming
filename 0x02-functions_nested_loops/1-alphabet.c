#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()  
{  
char ch = 'a';
  
printf(« Alphabets anglais minuscules:\n »);
    while(ch <= 'z')  
    {  
printf(« %c « , ch);
        ch++;  
    }  
printf(« \n »);
  
return 0;
}  