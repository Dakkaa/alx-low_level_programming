#include "holberton.h"

/**

 * _strcat - concatenates two strings,

 * @dest: destination.

 * @src: source.

 * Return: the pointer to dest.

 */

char *_strcat(char *dest, char *src)

{

1-strncat.c int count = 0, count2 = 0;



1-strncat.c while (*(dest + count) != 0)

1-strncat.c {

1-strncat.c 1-strncat.c count++;

1-strncat.c }



1-strncat.c while (count2 >= 0)

1-strncat.c {

1-strncat.c 1-strncat.c *(dest + count) = *(src + count2);

1-strncat.c 1-strncat.c if (*(src + count2) == 0)

1-strncat.c 1-strncat.c 1-strncat.c break;

1-strncat.c 1-strncat.c count++;

1-strncat.c 1-strncat.c count2++;

1-strncat.c }

1-strncat.c return (dest);

}
