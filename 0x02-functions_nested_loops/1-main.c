#include "main.h"
/**
* print_alphabet - prints letters
* Description: display small letters
*/
void print_alphabet(void)
{
        char letter = 'a';

        while (letter <= 'z')
        {
                _putchar(letter);
                letter++;
        }
}
