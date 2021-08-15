
#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src)
{
  int i;
  int e;

  i = 0;
  e = 0;
  while (dest[i] != '\0')
    i++;
  while (src[e] != '\0')
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
  char *src = "abc";
  char dest[100] = "123";

  printf ("%s\n", ft_strcat (dest, src));
  printf ("real %s\n", strcat (dest, src));
  //printf ("%s\n", ft_strcat (dest, src));
  return (0);
}
