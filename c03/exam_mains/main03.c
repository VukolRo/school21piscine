
#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
  int i;
  unsigned int e;

  i = 0;
  e = 0;
  while (dest[i] != '\0')
    i++;
  while (src[e] != '\0' && e < nb)
  {
      dest[i] = src[e];
      i++;
      e++;
  }
  dest[i++] = '\0';
  return (dest);
}


int main ()
{
  char *src = "abcdefg";
  char dest[100] = "12345";

  printf ("%s\n", ft_strncat (dest, src, 3));
  //printf ("real %s\n", strncat (dest, src, 2));
  //printf ("%s\n", ft_strcat (dest, src));
  return (0);
}
