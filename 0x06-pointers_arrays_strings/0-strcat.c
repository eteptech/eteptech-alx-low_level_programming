#include <stdio.h>
/**
 * _strcat- Concatinate two given strings
 * @dest : String to be concated
 * @src : String to be concated to
 * Return: 0 on success
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);

}
